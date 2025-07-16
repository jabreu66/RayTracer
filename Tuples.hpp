#ifndef TUPLES_H
#define TUPLES_H
#include<iostream>
#include <array>

class Tuples
{
    public:
        std::array<float,4> getTuple();

    private:
        float x;
        float y;
        float z;
        float w;

        std::array<float, 4> tuple = {x, y, z, w};


};




#endif