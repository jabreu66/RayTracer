#include "Tuples.hpp"
#include <iostream>
#include <array>

Tuples::Tuples(float x, float y, float z, float w) : x(x), y(y), z(z), w(w)
{
    std::array<float, 4> tuple = {x, y, z, w};
}

bool Tuples::isPoint()
{
    return this->tuple[3] == 1;
}

bool Tuples::isVector()
{
    return this->tuple[3] == 0;
}

std::array<float, 4> Tuples::getTuple()
{
    return this->tuple;
}
