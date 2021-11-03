# Targets

In these subfolders, you'll find the target version 2.2 of the used benchmark network application [lib60870](https://github.com/mz-automation/lib60870).

There are two subfolders, `lava` and `original`.

The `original` subfolder is for reference and contains a git submodule linking the actual commit we checked out from the vendor mz-automation. **This folder is not used in our benchmarks because it misses bug ground truth.**

The `lava` subfolder contains a modified source code version of the original that we passed to [LAVA](https://github.com/panda-re/lava) to **inject a total of 100 synthetic crashing bugs**.
Thus, this version is *extremely* buggy, we use it as ground truth for our case study's fuzzing campaign.

