#ifndef TUPLES_H
#define TUPLES_H
#include<iostream>
#include <array>

class Tuples
{
    public:
        Tuples(float x, float y, float z, float w);
        std::array<float,4> getTuple();

        bool isPoint();
        bool isVector();

    private:
        float x;
        float y;
        float z;
        float w;

        std::array<float, 4> tuple = {x, y, z, w};


};

inline Tuples point(float x, float y, float z)
{
    return Tuples(x, y, z, 1);
}

inline Tuples vector(float x, float y, float z)
{
    return Tuples(x, y, z, 0);
}

#endif