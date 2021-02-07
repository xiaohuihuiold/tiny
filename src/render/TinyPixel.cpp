#include "TinyPixel.h"

using namespace tiny::math;
using namespace tiny::render;

void TinyPixel::setColor(Tfloat r, Tfloat g, Tfloat b, Tfloat a)
{
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}
