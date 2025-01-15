#ifndef __LOOP_DE_FOR_H__
#define __LOOP_DE_FOR_H__

#define N 2 //SA Size

typedef struct {
    int ba_loop[N][N];
} LDF;

void loop_init(LDF *ldf);
void loop_compute(LDF *ldf);
void loop_show_ba(LDF *ldf);

#endif