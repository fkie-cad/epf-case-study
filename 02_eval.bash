#!/bin/bash


source ./scripts/python_venv/bin/activate
./scripts/08_resample_epf_coverage_series_to_1s.py
./scripts/09_plot_coverage_results.py
./scripts/10_validate_crash_results.py
./scripts/11_calculate_crash_statistics.py
