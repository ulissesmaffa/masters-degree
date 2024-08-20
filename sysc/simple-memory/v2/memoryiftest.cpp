#include "memoryiftest.h"

// Configura o ambiente de teste
MemoryIFTest::MemoryIFTest (sc_module_name name) : sc_module(name) {
  SC_THREAD(test_stim);
  sensitive << clock.pos();
}

void MemoryIFTest::test_stim() {
  int addr;
  int data;
  int m_data;

  while(1) {
    // Generate a random address and data
    addr = std::rand() % 255;
    data = std::rand();

    //Write the data into the memory
    std::cout <<  "Writing memory address = " << addr << " data = " << data << std::endl;
    memory->write(addr, data);

    // Read it back and check if it is correct
    m_data = memory->read(addr);
    std::cout <<  "Read memory address = " << addr << " data = " << m_data << std::endl;

    if (m_data != data) {
      std::cout << "Error = incorrect data read from memory" << std::endl;
    }

    wait();
  }
}