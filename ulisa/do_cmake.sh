#!/bin/bash


GENERATOR="Unix Makefiles"

cmake -G "${GENERATOR}" \
    -DCMAKE_BUILD_TYPE="Release" \
    ../
