#ifndef __SA_PE_H__
#define __SA_PE_H__

#include <cstdint>

class PE {
public:
    uint8_t li;   // Left input (8 bits)
    uint8_t tw;   // Top weight input (8 bits)
    uint8_t ri;   // Right output (8 bits)
    uint8_t bw;   // Bottom weight output (8 bits)
    uint16_t ba;  // Accumulator (16 bits)

    PE();

    void compute();
};

#endif 
