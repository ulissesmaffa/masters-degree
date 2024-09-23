#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ulisses/Projects/masters-degree/autosa/mm_small/hls_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
