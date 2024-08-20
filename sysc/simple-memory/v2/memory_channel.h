#ifndef MEMORY_CHANNEL_H
#define MEMORY_CHANNEL_H

#include <systemc>
using namespace sc_core;

#include "memory_if.h"

class memory_channel : public sc_module, public memory_if {
  public:
    // Construtor
    SC_CTOR(memory_channel);
    // Implementação das funções da interface
    int read(int addr);
    void write(int addr, int data);
  private:
    // Memória simulada
    // Este é o espaço de memória que os métodos read e write acessarão
    int mem [255];
};

#endif