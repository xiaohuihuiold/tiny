#include <iostream>
#include <GLFW/glfw3.h>

#include "render/TinyImage.h"

const int WIDTH = 800;
const int HEIGHT = 480;

int main(int argc, char **argv)
{
    glfwInit();
    GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "Tiny", nullptr, nullptr);
    glfwMakeContextCurrent(window);
    glViewport(0, 0, WIDTH, HEIGHT);

    tiny::render::TinyImage image;
    image.pixels = new tiny::render::TinyPixel[WIDTH * HEIGHT];

    image.pixels[WIDTH*55+400].setColor(0.0f,1.0f,0.0f,0.0f);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();
        glTranslatef(-1.0f, -1.0f, 0.0f);

        glDrawPixels(WIDTH, HEIGHT, GL_RGBA, GL_FLOAT, image.pixels);

        glfwSwapBuffers(window);
    }
    delete[] image.pixels;
    glfwTerminate();
    return 0;
}
