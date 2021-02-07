#ifndef RENDER_TINY_IMAGE_H
#define RENDER_TINY_IMAGE_H

#include "TinyPixel.h"
namespace tiny
{

    namespace render
    {

        class TinyImage
        {
        public:
            TinyPixel *pixels;

        public:
            TinyImage();

            ~TinyImage();
        };
        
    } // namespace render

} // namespace tiny

#endif