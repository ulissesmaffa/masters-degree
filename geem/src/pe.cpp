#include "pe.h"

PE::PE():li(0),tw(0),ri(0),bw(0),ba(0){}

void PE::compute() {
    ri = li;
    bw = tw;
    ba += li * tw;
}

void PE::reset(){
    ba = 0;
}