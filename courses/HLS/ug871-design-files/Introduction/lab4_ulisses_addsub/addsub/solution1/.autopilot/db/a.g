#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ulisses/Projects/masters-degree/courses/HLS/ug871-design-files/Introduction/lab4_ulisses/addsub/solution1/.autopilot/db/a.g.bc ${1+"$@"}