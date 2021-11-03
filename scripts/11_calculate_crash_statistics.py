#!/usr/bin/env python3

import logging
import os
import sys
import pathlib
import re


from base64 import b64decode
from contextlib import suppress
from hashlib import sha512
from typing import Generator, List, Tuple

import scipy.stats

import matplotlib.axes as axes
import matplotlib.lines as lines
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

from tqdm import tqdm as progress_bar


GIT_ROOT_PATH    = pathlib.Path(__file__).parent.parent

RESULTS_PATH = GIT_ROOT_PATH / 'results'

EPF_VALIDATED_PATH = RESULTS_PATH / 'epf_crashes_validated.csv'
EPF_DEDUP_RESULTS_PATH = RESULTS_PATH / 'epf_crashes_deduplicated.csv'
EPF_STATS_RESULTS_PATH = RESULTS_PATH / 'epf_crashes_stats.csv'
AFLNET_VALIDATED_PATH = RESULTS_PATH / 'aflnet_crashes_validated.csv'
AFLNET_DEDUP_RESULTS_PATH = RESULTS_PATH / 'aflnet_crashes_deduplicated.csv'
AFLNET_STATS_RESULTS_PATH = RESULTS_PATH / 'aflnet_crashes_stats.csv'

STACK_EXTRACTION_PATTERN = re.compile(r'\s+#(\d+)\s0x[\da-f]+\sin\s([a-zA-Z0-9_\-]+)\s.*\/([a-zA-Z\d\/_\-]+\.c):(\d+):\d+')
RUN_PATTERN = re.compile(r'\/datasets\/[a-z]+\/[a-z]+_(\d+)\/')

def setup_logging():
    logging.basicConfig(format='[%(relativeCreated)20.4f][%(levelname)s] %(message)s', level=logging.INFO)


def add_run_column_to(df: pd.DataFrame) -> pd.DataFrame:
    extracted_runs = []
    for path in df['path']:
        run = RUN_PATTERN.findall(path)
        assert len(run) == 1
        extracted_runs.append(run[0])

    df['run'] = extracted_runs

    return df



def create_dataframe(source: pathlib.Path) -> pd.DataFrame:
    df = pd.read_csv(source)
    add_run_column_to(df)
    return df


def read_crashes(source: pathlib.Path) -> pd.DataFrame:
    logging.info('Get validated crashes from dataset...')
    return create_dataframe(source)


def read_epf_crashes() -> pd.DataFrame:
    logging.info('Fetching EPF results...')
    return read_crashes(source=EPF_VALIDATED_PATH)


def read_aflnet_crashes() -> pd.DataFrame:
    logging.info('Fetching AFLNet results...')
    return read_crashes(source=AFLNET_VALIDATED_PATH)


def get_crashes() -> Tuple[pd.DataFrame, pd.DataFrame]:
    return read_epf_crashes(), read_aflnet_crashes()


def calculate_stack_trace_hash(stderr: str) -> Tuple[str, str]:
    decoded_stderr = b64decode(stderr).decode()
    stack_items = STACK_EXTRACTION_PATTERN.findall(decoded_stderr)

    trigger_function = stack_items[0][1]

    concatenated_stack_items = '\n'.join([' '.join(item) for item in stack_items])
    hash_value = sha512()
    hash_value.update(concatenated_stack_items.encode())
    return hash_value.hexdigest(), trigger_function


def add_stack_trace_hash_to(df: pd.DataFrame) -> pd.DataFrame:
    logging.info('Calculating sha512 stack trace hashes based on item position, filename, function, and line...')
    stack_trace_hashes = []
    trigger_functions = []

    for stderr in progress_bar(df['stderr']):
        hash_value, trigger_function = calculate_stack_trace_hash(stderr)
        stack_trace_hashes.append(hash_value)
        trigger_functions.append(trigger_function)

    df['hash'] = stack_trace_hashes
    df['trigger_function'] = trigger_functions

    return df


def calculate_p_discov_of(df: pd.DataFrame) -> pd.DataFrame:
    results = {}
    for _, group in df.groupby(['run', 'hash']):
        h = group['trigger_function'].head().values[0]
        if h not in results:
            results[h] = 0.0
        results[h] += 1.0

    result_df = pd.DataFrame()
    result_df['trigger_function'] = results.keys()
    result_df['p^discov'] = results.values()
    result_df['p^discov'] = result_df['p^discov'] / len(df['run'].drop_duplicates())

    return result_df


def calculate_e_trigger_of(df: pd.DataFrame) -> pd.DataFrame:
    results = pd.DataFrame()
    #print(df.groupby(['trigger_function']).size())
    result_series = df.groupby(['trigger_function']).size()
    results['trigger_function'] = result_series.keys()
    results['E^trigger'] = result_series.array
    return results


def main() -> int:
    setup_logging()

    logging.info('Calculating crash statistics...')
 
    epf, aflnet = get_crashes()

    add_stack_trace_hash_to(epf)
    add_stack_trace_hash_to(aflnet)

    logging.info(f'Writing deduplicated crash results to {str(EPF_DEDUP_RESULTS_PATH)}')
    epf.drop_duplicates(subset=['hash']).to_csv(EPF_DEDUP_RESULTS_PATH, index=False)

    logging.info(f'Writing deduplicated crash results to {str(AFLNET_DEDUP_RESULTS_PATH)}')
    aflnet.drop_duplicates(subset=['hash']).to_csv(AFLNET_DEDUP_RESULTS_PATH, index=False)

    logging.info('Calculating EPF p^discov')
    epf_stats = calculate_p_discov_of(epf)
    logging.info('Calculating EPF E^trigger')
    epf_stats['E^trigger'] = calculate_e_trigger_of(epf)['E^trigger']
    logging.info(f'Writing EPF statistics crash results to {str(EPF_STATS_RESULTS_PATH)}')
    epf_stats.to_csv(EPF_STATS_RESULTS_PATH, index=False)

    logging.info('Calculating AFLNet p^discov')
    aflnet_stats = calculate_p_discov_of(aflnet)
    logging.info('Calculating AFLNet E^trigger')
    aflnet_stats['E^trigger'] = calculate_e_trigger_of(aflnet)['E^trigger']
    logging.info(f'Writing AFLNet statistics crash results to {str(AFLNET_STATS_RESULTS_PATH)}')
    aflnet_stats.to_csv(AFLNET_STATS_RESULTS_PATH, index=False)


    logging.info('Done!')

    return os.EX_OK


if __name__ == '__main__':
    sys.exit(main())

