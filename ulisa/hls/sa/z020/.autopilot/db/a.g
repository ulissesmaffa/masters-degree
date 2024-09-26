#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/fabiob/sa/hls/sa/z020/.autopilot/db/a.g.bc ${1+"$@"}
