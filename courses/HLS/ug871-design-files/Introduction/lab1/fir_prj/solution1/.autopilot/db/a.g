#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ulisses/Projects/masters-degree/courses/HLS/ug871-design-files/Introduction/lab1/fir_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
