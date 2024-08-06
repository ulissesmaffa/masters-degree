#!/bin/bash

# SYSTEM_C
export SYSTEMC_HOME=/usr/local/systemc-2.3.1/
export LD_LIBRARY_PATH=$SYSTEMC_HOME/lib-linux64:$LD_LIBRARY_PATH

# MATCH_LIB
export CONNECTIONS_HOME=/home/ulisses/Projects/accelerator_husa/ESP_Systolic_Array_Accelerator/matchlib/connections
export MATCHLIB_HOME=/home/ulisses/Projects/accelerator_husa/ESP_Systolic_Array_Accelerator/matchlib/cmod

# BOOST
export BOOST_HOME=/usr/boost_home

# RAPIDJSON
export RAPIDJSON_HOME=/usr/local/include/rapidjson

# AC_TYPES
export AC_TYPES=/usr/local/include/ac_types

# AC_MATH
export AC_MATH=/usr/include/ac_math

# AC_SIMULTILS
export AC_SIMULTILS=/usr/include/ac_simutils

# BMP_IO
export BMP_IO=/usr/include/bmp_io
