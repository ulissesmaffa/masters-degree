Testar SystemC:

export SYSTEMC_HOME=/usr/local/systemc-2.3.1a
export LD_LIBRARY_PATH=$SYSTEMC_HOME/lib-linux64:$LD_LIBRARY_PATH
	
g++ -I$SYSTEMC_HOME/include -L$SYSTEMC_HOME/lib-linux64 -o test_systemc test_systemc.cpp -lsystemc -lm

./test_systemc
