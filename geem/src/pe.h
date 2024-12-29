#ifndef __PE_H__
#define __PE_H__

class PE {

    public:

        int li; //left inputs (matrix a)
        int tw; //top inputs (matrix b)
        int ri; //right output
        int bw; //bottom weight output
        int ba; //accumulator

        PE();

        void compute();
        void reset();
    };

#endif 
