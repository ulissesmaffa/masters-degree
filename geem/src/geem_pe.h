#ifndef __PE_H__
#define __PE_H__

typedef struct {
    int li; // left inputs (matrix a)
    int tw; // top inputs (matrix b)
    int ri; // right output
    int bw; // bottom weight output
    int ba; // accumulator
} PE;

void pe_init(PE *pe);
void pe_compute(PE *pe);
void pe_reset(PE *pe);

#endif 

