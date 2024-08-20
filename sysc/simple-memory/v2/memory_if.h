#ifndef MEM_IF_H
#define MEM_IF_H

#include <systemc.h>
using namespace sc_core;

class memory_if : public sc_interface{
   public:
      virtual int read(int addr)=0;
      virtual void write(int addr, int data)=0;
};

#endif