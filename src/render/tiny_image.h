#ifndef __RENDER_TINY_IMAGE_H
#define __RENDER_TINY_IMAGE_H

#include "tiny_pixel.h"

class TinyImage
{
public:
    TinyPixel *pixels;

public:
    TinyImage();

    ~TinyImage();
};

#endif