#ifndef SBUFFER_H_
#define SBUFFER_H_

typedef int	data_t;

typedef struct _cell{
   int id;
   int value;
   struct _cell *next;
   struct _cell *prev;
}cell;

void sbuffer(data_t a, data_t i);
void getBuffer();
void top(data_t a, data_t i);

#endif
