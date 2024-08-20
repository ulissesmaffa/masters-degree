#ifndef MEMORY_IF_TEST_H
#define MEMORY_IF_TEST_H

#include <systemc.h>
#include "memory_if.h"
using namespace sc_core;

struct MemoryIFTest : public sc_module {
   // Ports
   sc_in<bool> clock;
   sc_port<memory_if> memory;
   // Processes
   void test_stim();
   // Contructor
   SC_CTOR(MemoryIFTest);
};

#endif