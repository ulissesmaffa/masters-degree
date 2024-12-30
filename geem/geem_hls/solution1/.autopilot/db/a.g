#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ulisses/Projects/masters-degree/geem/geem_hls/solution1/.autopilot/db/a.g.bc ${1+"$@"}
