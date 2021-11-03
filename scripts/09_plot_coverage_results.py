#!/usr/bin/env python3

import logging
import os
import sys
import pathlib

from contextlib import suppress
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

COVERAGE_PLOT_PATH = RESULTS_PATH / 'coverage_plot.pdf'
COVERAGE_STATS_PATH = RESULTS_PATH / 'coverage_stats.csv'


EPF_DATASET_PATH = GIT_ROOT_PATH / 'datasets' / 'epf'
AFLNET_DATASET_PATH = GIT_ROOT_PATH / 'datasets' / 'aflnet'


THREE_DAYS = pd.Timedelta('3D')

def setup_logging():
    logging.basicConfig(format='[%(relativeCreated)20.4f][%(levelname)s] %(message)s', level=logging.INFO)


def set_column_names(df: pd.DataFrame) -> pd.DataFrame:
    df.rename(columns={df.columns[0]: 'timestamp', df.columns[1]: 'reported_coverage'}, inplace=True)
    return df


def calculate_timedelta(df: pd.DataFrame) -> pd.DataFrame:
    kwargs = {}
    with suppress(ValueError):
        df.timestamp = df.timestamp.astype(int)
        base = df['timestamp'].min()
        df = df.assign(timestamp=lambda x: x.timestamp - base)
        kwargs.update({'unit': 's'})
    df['timestamp'] = pd.to_timedelta(df['timestamp'], **kwargs)
    return df


def interpolate_to_three_days(df: pd.DataFrame) -> pd.DataFrame:
    last_timestamp = df['timestamp'].iloc[-1]
    if last_timestamp < THREE_DAYS:
        new_last = df.tail(1).copy()
        new_last.timestamp = THREE_DAYS
        df = df.append(new_last)
        df.set_index('timestamp', inplace=True)
        df = df.resample('1S').ffill()
        df.reset_index(inplace=True)
    return df


def create_dataframe(source: pathlib.Path, columns: List[int]) -> pd.DataFrame:
    df = pd.read_csv(source, usecols=columns, parse_dates=True)
    df = set_column_names(df)
    df = calculate_timedelta(df)
    df['run'] = source.parent.name
    df = interpolate_to_three_days(df)
    return df


def read_coverage(sources: List[pathlib.Path], columns: List[int]) -> pd.DataFrame:
    logging.info('Reading coverage results from dataset...')
    dataframes = list(create_dataframe(source, columns=columns) for source in progress_bar(sources))
    return pd.concat(dataframes)


def read_epf_coverage() -> pd.DataFrame:
    return read_coverage(
        sources=list(EPF_DATASET_PATH.glob('**/resampled_coverage.csv')),
        columns=[0, 1]
    )


def read_aflnet_coverage() -> pd.DataFrame:
    return read_coverage(
        sources=list(AFLNET_DATASET_PATH.glob('**/plot_data')),
        columns=[0, 11]
    )


def read_results() -> Tuple[pd.DataFrame, pd.DataFrame]:
    return read_epf_coverage(), read_aflnet_coverage()


def plot_coverage_over_time_per_run(df: pd.DataFrame, ax: axes.Axes, color: str, label: str):
    logging.info('Plotting per-run coverage series...')
    for _, run in progress_bar(df.groupby(['run'])):
        ax.plot(run['timestamp'].dt.total_seconds(), run['reported_coverage'], color=color, linewidth=2.0, alpha=0.2)


def plot_median_coverage_over_time(df: pd.DataFrame, ax: axes.Axes, color: str, label: str):
    logging.info('Plotting median coverage series...')
    median_over_time = df.groupby('timestamp', as_index=False).median()
    ax.plot(median_over_time['timestamp'].dt.total_seconds(), median_over_time['reported_coverage'], color=color, linewidth=8.0, label=label)


def style_plot(ax: axes.Axes):
    ax.set_ylim(825, 1070)
    ax.set_xlim(-500, 259800)
    ax.tick_params(direction='out', length=10, width=4, colors='#666666', labelsize=25) 
    for _, spine in ax.spines.items():
        spine.set_linewidth(3)
        spine.set_visible(True)
        spine.set_color('#666666')
    ax.set_xlabel('Time [s]' ,fontsize='25', color='#666666')
    ax.set_ylabel('Directed Branch Coverage', fontsize='25', color='#666666')
    handles, labels = ax.get_legend_handles_labels()
    handles += [lines.Line2D([0], [0], color='#E8A56B', lw=5)]
    handles += [lines.Line2D([0], [0], color='#666666', lw=5)]
    labels += ['AFLNet Runs', 'EPF Runs']
    leg = plt.legend(handles=handles, labels=labels, loc='upper left', fontsize=25)
    for text in leg.get_texts():
        plt.setp(text, color = '#666666')
    plt.grid(True)
    plt.tight_layout()


def plot_coverage(epf: pd.DataFrame, aflnet: pd.DataFrame, destination: pathlib.Path):
    fig, ax = plt.subplots(figsize=(16, 10))

    plot_coverage_over_time_per_run(aflnet, ax, color='#E8A56B', label='AFLNet Runs')
    plot_coverage_over_time_per_run(epf, ax, color='#666666', label='EPF Runs')
    plot_median_coverage_over_time(aflnet, ax, color='#3E7CA6', label='AFLNet Median')
    plot_median_coverage_over_time(epf, ax, color='#C03D3E', label='EPF Median')
    
    style_plot(ax)

    plt.savefig(destination)
    plt.close(fig)
    plt.cla()
    plt.clf()
    logging.info('Saved coverage plot to \'%s\'!', destination)


def calculate_coverage_stats(df: pd.DataFrame, fuzzer: str) -> pd.DataFrame:
    final_coverages = df.groupby('run')['reported_coverage'].max()

    mean = final_coverages.mean()
    median = final_coverages.max()
    stdev = final_coverages.std()
    var = final_coverages.var()
    maximum = final_coverages.max()
    minimum = final_coverages.min()

    return pd.DataFrame({'fuzzer': [fuzzer], 'mean': [mean], 'median': [median], 'stdev': [stdev], 'var': [var], 'maximum': [maximum], 'minimum': [minimum]})


def u_z_score(u, x, y):
    m_u = len(x)*len(y) / 2
    sigma_u = np.sqrt(len(x)*len(y)*(len(x)+len(y)+1)/12)
    z = (u - m_u)/sigma_u
    return z


def pearson_correlation(u, x, y):
    return u_z_score(u, x, y) / np.sqrt(len(x) + len(y))


def stats_coverage(epf: pd.DataFrame, aflnet: pd.DataFrame, destination: pathlib.Path):
    logging.info('Calculating coverage stats for both fuzzers...')

    stats = pd.concat([
        calculate_coverage_stats(epf, 'epf'),
        calculate_coverage_stats(aflnet, 'aflnet')]
    )

    final_cov_epf = epf.groupby('run')["reported_coverage"].max().values
    final_cov_aflnet = aflnet.groupby('run')["reported_coverage"].max().values
    u, p = scipy.stats.mannwhitneyu(final_cov_aflnet, final_cov_epf, alternative='greater')
    r = pearson_correlation(u, final_cov_aflnet, final_cov_epf)

    stats['p_value'] = [p] * 2
    stats['pearson_r'] = [r] * 2

    stats.to_csv(destination, index=False)

    logging.info('Saved coverage stats to \'%s\'!', destination)


def main() -> int:
    setup_logging()

    logging.info('Creating coverage evaluation results...')
 
    epf, aflnet = read_results()

    plot_coverage(epf, aflnet, destination=COVERAGE_PLOT_PATH)
    stats_coverage(epf, aflnet, destination=COVERAGE_STATS_PATH)

    logging.info('Done!')

    return os.EX_OK


if __name__ == '__main__':
    sys.exit(main())

