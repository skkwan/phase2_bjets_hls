#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/skwan/vivado/phase2_bjets_hls/solution1/.autopilot/db/a.g.bc ${1+"$@"}
