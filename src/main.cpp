#include <iostream>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "render/tiny_image.h"

const int WIDTH = 800;
const int HEIGHT = 480;

int main(int argc, char **argv)
{
    glfwInit();
    GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "Tiny", nullptr, nullptr);
    glfwMakeContextCurrent(window);
    glViewport(0, 0, WIDTH, HEIGHT);

    TinyImage image;
    image.pixels = new TinyPixel[WIDTH * HEIGHT];

    for (int i=0;i<800;i++)
    {
        image.pixels[77 * WIDTH+i].color = 0xff0000ff;
    }

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();
        glTranslatef(-1.0f, -1.0f, 0.0f);

        glDrawPixels(WIDTH, HEIGHT, GL_RGBA, GL_UNSIGNED_BYTE, image.pixels);

        glfwSwapBuffers(window);
    }
    delete[] image.pixels;
    glfwTerminate();
    return 0;
}
