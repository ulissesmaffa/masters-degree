#ifndef __SA_H__
#define __SA_H__

#include "pe.h"

#define N 2 //Systolic Array Size

typedef struct{
    bool ready;
    int value;
} Buffer;

class SA {

   public:
      int ba_sa[N][N];

      SA();

      void compute();
      void reset();

      void addToBufferA(int i, int value);
      void addToBufferB(int j, int value);

   private:
      PE pe[N][N];

      Buffer buffer_a_li[N];
      Buffer buffer_b_tw[N];
};

#endif
