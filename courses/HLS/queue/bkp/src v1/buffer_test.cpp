#include <stdio.h>
#include "buffer.h" 

#define SIZE 10

using namespace std;

int main() {
   BUFFER buffer;

   int value = 3;

   buffer.simpleFunc(value);

/*
   int i;
   printf("Add Buffer\n");
   for(i=0;i<SIZE;i++){
      buffer.addBuffer(i);
   }

   printf("Show Buffer\n");
   buffer.showBuffer();

   printf("Clean Buffer\n");
   buffer.cleanBuffer();
*/
}
