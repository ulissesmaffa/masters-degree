# 1 "/home/ulisses/Projects/masters-degree/geem/src/geem_pe.c"
# 1 "/home/ulisses/Projects/masters-degree/geem/src/geem_pe.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ulisses/Projects/masters-degree/geem/src/geem_pe.c" 2
# 1 "/home/ulisses/Projects/masters-degree/geem/src/geem_pe.h" 1



typedef struct {
    int li;
    int tw;
    int ri;
    int bw;
    int ba;
} PE;

void pe_init(PE *pe);
void pe_compute(PE *pe);
void pe_reset(PE *pe);
# 2 "/home/ulisses/Projects/masters-degree/geem/src/geem_pe.c" 2

void pe_init(PE *pe) {
    pe->li = 0;
    pe->tw = 0;
    pe->ri = 0;
    pe->bw = 0;
    pe->ba = 0;
}

void pe_compute(PE *pe) {
    pe->ri = pe->li;
    pe->bw = pe->tw;
    pe->ba += pe->li * pe->tw;
}

void pe_reset(PE *pe) {
    pe->ba = 0;
}
