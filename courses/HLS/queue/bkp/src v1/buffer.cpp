#include "buffer.h"
#include <iostream>

BUFFER::BUFFER():li(0){}

void BUFFER::simpleFunc(int value){
   li = value;
}

/*
void BUFFER::addBuffer(int8_t value){
   buffer.push(value);
}

void BUFFER::cleanBuffer(){
   while (!buffer.empty()) {
      buffer.pop();
   }
}

void BUFFER::showBuffer(){
   queue<int8_t> temp = buffer;
   printf("[%li]buffer: ",temp.size());
   while (!temp.empty()){
      printf("%i ",temp.front());
      temp.pop();
   }
   printf("\n");
}
*/
