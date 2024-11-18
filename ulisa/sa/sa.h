#ifndef __SA_H__
#define __SA_H__

#include "pe.h"
#include <queue> 

#define ARRAY_SIZE 4

using namespace std;
class SA {

   public:
      int16_t ba_sa[ARRAY_SIZE][ARRAY_SIZE];

      //Construtor
      SA();

      void compute();
      void reset();

      //Métodos para Buffers
      void addToBufferA(int row, int8_t value);
      void addToBufferB(int col, int8_t value);
      void showBuffers();
      void showBufferB();

   private:
      PE pe[ARRAY_SIZE][ARRAY_SIZE];

      //Buffers FIFO
      queue<int8_t> bufferA_li[ARRAY_SIZE];
      queue<int8_t> bufferB_tw[ARRAY_SIZE];
};

#endif
