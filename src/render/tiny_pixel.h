#ifndef __TINY_PIXEL_H
#define __TINY_PIXEL_H

#include <GLFW/glfw3.h>

struct TinyPixel
{
    GLuint color;

    void setColor(GLuint rgba);
};

#endif
