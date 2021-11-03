# lava-lib60870-C

**WARNING: DO NOT USE THIS VERSION OUTSIDE OF OUR EVALUATIONS!! IT IS HIGHLY BUGGED BY DESIGN!!**

In this folder, you'll find modified server source code of [lib60870](https://github.com/mz-automation/lib60870).

We applied the [LAVA](https://github.com/panda-re/lava) framework on the original source code of lib60870 version 2.2.
You can find the vanilla version under [../../original/lib60870](../../original/lib60870).

LAVA is short for Large Scale Automated Vulnerability Addition ([paper](http://css.csail.mit.edu/6.858/2018/readings/lava.pdf)).
Using taint analysis and the [PANDA](https://github.com/panda-re/panda) platform, it allows us to inject synthetic bugs into
our target application. This is required to create our ground truth for the primary benchmark metric (unique bugs found) we
use in our case study.

We injected a total of 100 network-exploitable pointer arithmetic bugs into the target application.
All of them reliably trigger `SIGSEGV` crashes. Unfortunately, LAVA failed to find crashable injection points for the other supported
bug classes.

We would have prefered to provide you with an automated bug injection script, but we found LAVA to be very fragile during execution.
It does only work on a deprecated Ubuntu version and required a lot of manual source code fixing after code injection.
Thus, we hope you understand that we refrained from this idea.

