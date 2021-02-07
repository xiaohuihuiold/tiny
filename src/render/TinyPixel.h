#ifndef TINY_RENDER_PIXEL_H
#define TINY_RENDER_PIXEL_H

#include "../math/TinyTypes.h"

namespace tiny
{

    namespace render
    {

        struct TinyPixel
        {
            math::Tfloat r;
            math::Tfloat g;
            math::Tfloat b;
            math::Tfloat a;
            void setColor(math::Tfloat r, math::Tfloat g, math::Tfloat b, math::Tfloat a);
        };

    } // namespace render

} // namespace tiny

#endif
