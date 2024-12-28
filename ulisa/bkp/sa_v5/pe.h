#ifndef __PE_H__
#define __PE_H__

#include <cstdint>

class PE {
    
    public:
        int8_t li;   // Left input (8 bits)
        int8_t tw;   // Top weight input (8 bits)
        int8_t ri;   // Right output (8 bits)
        int8_t bw;   // Bottom weight output (8 bits)
        int16_t ba;  // Accumulator (16 bits)

        PE();

        void compute();
        void reset();
    };

#endif 
