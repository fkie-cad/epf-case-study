#!/usr/bin/env python3

import logging
import os
import sys
import pathlib

import pandas as pd

from tqdm import tqdm


GIT_ROOT_PATH    = pathlib.Path(__file__).parent.parent
EPF_DATASET_PATH = GIT_ROOT_PATH / 'datasets' / 'epf'


def setup_logging():
    logging.basicConfig(format='[%(relativeCreated)20.4f][%(levelname)s] %(message)s', level=logging.INFO)


def resample(df: pd.DataFrame, rule: str) -> pd.DataFrame:
    df['timestamp'] = pd.to_timedelta(df['timestamp'], unit='s')
    df.set_index('timestamp', inplace=True)
    df.sort_index(inplace=True)

    df = df.resample(rule).last() # downsample to 1s
    
    # crashes cause the fuzzer to pause for a bit (detect crash and restart), which is why coverage for
    # some seconds might be reported as NULL we are backfilling these empty values with the previously
    # known coverage in the series.
    df.bfill(inplace=True)
    df.reset_index(inplace=True)

    return df


def main() -> int:
    setup_logging()
    logging.info('Resampling the coverage series in \'debug.csv\' of each EPF run from iteration granularity to 1s...')
    for debug_csv in tqdm(list(EPF_DATASET_PATH.glob('**/debug.csv'))):
        resampled_csv = debug_csv.parent / 'resampled_coverage.csv'
        original = pd.read_csv(debug_csv, usecols=[0, 8])  # timestamp and coverage
        resampled = resample(original, rule='1S')
        resampled.to_csv(resampled_csv, index=False)
    logging.info('Finished. In each EPF dataset folder, there is now a \'resampled_coverage.cs\' file with a 1s-resampled coverage series.')
    return os.EX_OK

if __name__ == '__main__':
    sys.exit(main())

