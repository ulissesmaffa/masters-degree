#ifndef __SA_H__
#define __SA_H__

#include "pe.h"
#include <queue> 

using namespace std;
class SA {

   public:
      uint8_t tw_sa_00;
      uint8_t tw_sa_01;

      uint8_t li_sa_00; 
      uint8_t li_sa_10;

      uint16_t ba_sa_00;
      uint16_t ba_sa_10;
      uint16_t ba_sa_01;
      uint16_t ba_sa_11;

      SA();

      void compute();
      void reset();

      void addToBufferA_li00(uint8_t li_00);
      void addToBufferA_li10(uint8_t li_10);
      void addToBufferB_tw00(uint8_t tw_00);
      void addToBufferB_tw01(uint8_t tw_01);

      void showBuffers();

   private:
      PE pe[2][2]; // Array 2x2 de PEs

      // Buffers FIFO
      queue<uint8_t> bufferA_li_00; // Para li_sa_00
      queue<uint8_t> bufferA_li_10; // Para li_sa_10

      queue<uint8_t> bufferB_tw_00; // Para tw_sa_00
      queue<uint8_t> bufferB_tw_01; // Para tw_sa_01
};

#endif
