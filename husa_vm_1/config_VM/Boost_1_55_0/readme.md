Test script for boost_1_55_0

export BOOST_ROOT=/usr/local/boost_1_55_0
export BOOST_HOME=/usr/local/boost_1_55_0
export BOOST_LIBRARYDIR=$BOOST_ROOT/libs

g++ -I$BOOST_INCLUDEDIR -L$BOOST_LIBRARYDIR -o test_boost test_boost.cpp -lboost_system -lboost_filesystem

./test_boost

