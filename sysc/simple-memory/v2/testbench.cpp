#include <systemc.h>
#include "memory_channel.h"
#include "memoryiftest.h"

int sc_main(int argc, char* argv[]){
   // Modules
   MemoryIFTest t1("mem_test");
   memory_channel mem1("memory");
   
   // Clock signal
   sc_clock clk("clock", 10, SC_NS, 0.5);
   
   // Connect the modules
   t1.clock(clk);
   t1.memory(mem1);

   // Run the simulation
   sc_start(50, SC_NS);
   return 0;
}