#include "memory_channel.h"

memory_channel::memory_channel(sc_module_name name) : sc_module(name) {
  std::fill(mem, mem+255, 0);
}


int memory_channel::read(int addr) {
   if (addr > 255 || addr < 0) {
     std::cout << "addr must be between 0 and 255" << std::endl;
     return -1;
   }
   else {
     return mem[addr];
   }
}

void memory_channel::write(int addr, int data) {
  if (addr > 255 || addr < 0) {
    std::cout << "addr must be between 0 and 255" << std::endl;
  }
  else {
    mem[addr] = data;
  }
}
