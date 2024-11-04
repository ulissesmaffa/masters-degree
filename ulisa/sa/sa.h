#ifndef __SA_H__
#define __SA_H__

#include "pe.h"

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

   private:
      PE pe[2][2]; // Array 2x2 de PEs

};

#endif
