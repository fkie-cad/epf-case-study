#!/bin/bash

tmux_session="aflnet"

RUNS="${RUNS:-100}"

if [[ -z "${AFFIRMATIVE}" ]]; then
    echo "WARNING: This script runs $RUNS fuzzer instances in parallel..."
    echo "         If this is not what you want, please pass the count of parallel runs using the"
    echo "         RUNS environment variable."
    echo "         Also, you might skip this warning by setting the AFFIRMATIVE environment variable."
    echo
    echo "   e.g.: RUNS=10 AFFIRMATIVE=roger $0"
    echo
    read -p "Are you sure you want to continue (y | n)? " -n 1 -r
    echo
    if ! [[ $REPLY =~ ^[Yy]$ ]]; then
        echo "aborting..."
        exit 1
    fi
fi

REPO=`git rev-parse --show-toplevel`

FUZZERS="$REPO/fuzzers"
AFLNET_FUZZER="$FUZZERS/aflnet"

RESULTS="$REPO/dataset/aflnet"
TARGET="$REPO/targets/lava/lib60870-C-2.2/src/server_taint_analysis"
SEEDS="$REPO/seed_files/raw/files"

echo "===> Starting AFLNet evaluation... spawning 100 parallel fuzz jobs with 72hrs time budget"

#create new session
tmux kill-session -s $tmux_session
killall server_taint_analysis
tmux new-session -d -s $tmux_session

current_window="1-4"
id_window="0"

for run in `seq 0 $(($RUNS-1))`; do
	n=$(($run % 3))
	if [ "$n" -eq "0" ]; then
		current_window="$run-$(($run+3))"
		id_window="$(($id_window + 1))"
		tmux new-window -t $tmux_session:$id_window -n "$current_window"
		for _ in {1..2}; do tmux split-window -h -t $tmux_session:$id_window; done
	fi

	result_dir="$RESULTS/aflnet_$run"
	mkdir -p $result_dir

	target_port=$(("31000" + "$run"))

	cmd="AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=yes AFL_SKIP_CPUFREQ=yes taskset $((run + 1)) afl-fuzz -d -i $SEEDS -o $result_dir -N 'tcp://127.0.0.1/${target_port}' -P IEC104 -E -K -R $TARGET $target_port"

	tmux send-keys -t $tmux_session:$id_window.$n "export AFLNET=$AFLNET" C-m
	tmux send-keys -t $tmux_session:$id_window.$n "export PATH=$AFLNET:$PATH" C-m
	tmux send-keys -t $tmux_session:$id_window.$n "export AFL_PATH=$AFLNET" C-m
	tmux send-keys -t $tmux_session:$id_window.$n "$cmd" C-m
done

echo "===> Started jobs in background!! Results will be in '$RESULTS'. You can follow the progress in tmux if you want to. The session is called '$tmux_session'"
