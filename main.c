#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <leif/leif.h>
#include <stdio.h>

#define WINW 400
#define WINH 600
#define DEFAULT_TITTLE "example"

int main() {

  glfwInit();

  GLFWwindow *window = glfwCreateWindow(WINW, WINH, DEFAULT_TITTLE, NULL, NULL);

  glfwMakeContextCurrent(window);

  lf_init_glfw(WINW, WINH, window);

  while (!glfwWindowShouldClose(window)) {

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    lf_begin();

    lf_text("Hello, World!\n");

    lf_end();

    glfwPollEvents();
    glfwSwapBuffers(window);
  }

  glfwDestroyWindow(window);
  glfwTerminate();

  return 0;
}
