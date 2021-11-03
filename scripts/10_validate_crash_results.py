#!/usr/bin/env python3

import logging
import os
import sys
import pathlib
import subprocess

from contextlib import suppress
from typing import List, Tuple

from tqdm import tqdm as progress_bar


GIT_ROOT_PATH    = pathlib.Path(__file__).parent.parent

RESULTS_PATH = GIT_ROOT_PATH / 'results'

EPF_DATASET_PATH = GIT_ROOT_PATH / 'datasets' / 'epf'
AFLNET_DATASET_PATH = GIT_ROOT_PATH / 'datasets' / 'aflnet'

EPF_VALIDATED_PATH = RESULTS_PATH / 'epf_crashes_validated.csv'
AFLNET_VALIDATED_PATH = RESULTS_PATH / 'aflnet_crashes_validated.csv'

VALIDATOR_PATH = GIT_ROOT_PATH / 'validator' / 'validator'

TARGET_ASAN_PATH = GIT_ROOT_PATH / 'targets' / 'lava' / 'lib60870-C-2.2' / 'src' / 'server_taint_analysis_asan'

AFLNET_REPLAY_PATH = GIT_ROOT_PATH / 'fuzzers' / 'aflnet' / 'aflnet-replay'


def setup_logging():
    logging.basicConfig(format='[%(relativeCreated)20.4f][%(levelname)s] %(message)s', level=logging.INFO)


def get_epf_crashes() -> List[pathlib.Path]:
    logging.info('Consolidating EPF crashes in filesystem...')
    crashes =  list(progress_bar(EPF_DATASET_PATH.glob('**/bug_payloads/**/*')))
    logging.info(f'Got {len(crashes)} ...')
    return crashes


def get_aflnet_crashes() -> List[pathlib.Path]:
    logging.info('Consolidating AFLNet crashes in filesystem...')
    crashes = list(progress_bar(AFLNET_DATASET_PATH.glob('**/replayable-crashes/id*')))
    logging.info(f'Got {len(crashes)} ...')
    return crashes


def get_crash_files() -> Tuple[List[pathlib.Path], List[pathlib.Path]]:
    return get_epf_crashes(), get_aflnet_crashes()


def main() -> int:
    setup_logging()

    logging.info('Validating crash results...')
 
    epf, aflnet = get_crash_files()

    epf_str = '\n'.join(str(path) for path in epf)
    aflnet_str = '\n'.join(str(path) for path in aflnet)


    logging.info(f'Validating AFLNet crashes (results: \'{str(AFLNET_VALIDATED_PATH)}\')...')
    with suppress(FileNotFoundError):
        AFLNET_VALIDATED_PATH.unlink()
    aflnet_ex = f'ulimit -n 10240; {str(VALIDATOR_PATH)} -fuzzer aflnet -output {str(AFLNET_VALIDATED_PATH)} -parallel 1024 -target {str(TARGET_ASAN_PATH)} -replay {str(AFLNET_REPLAY_PATH)}'
    subprocess.run(aflnet_ex, input=aflnet_str, encoding='ascii', shell=True, check=True, capture_output=True)

    logging.info(f'Validating EPF crashes (results: \'{str(EPF_VALIDATED_PATH)}\')...')
    logging.warning(f'THIS MAY TAKE A LONG TIME')
    with suppress(FileNotFoundError):
        EPF_VALIDATED_PATH.unlink()
    epf_ex = f'ulimit -n 10240; {str(VALIDATOR_PATH)} -fuzzer epf -output {str(EPF_VALIDATED_PATH)} -parallel 1024 -target {str(TARGET_ASAN_PATH)}'
    subprocess.run(epf_ex, input=epf_str, encoding='ascii', shell=True, check=True, capture_output=True)
    logging.info('Done!')

    return os.EX_OK


if __name__ == '__main__':
    sys.exit(main())

