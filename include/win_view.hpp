#pragma once

#include <GL/glut.h>

#include <mgsi.hpp>

typedef struct
{
  int x, y;
} vec2_t;

typedef struct mouse
{
  vec2_t pos;
  int button_pressed;
} mouse_t;

namespace win_view
{
  extern mouse_t *m_mouse;
  void init(int argc, char **argv);
  void display();
  void keyboard(unsigned char key, int x, int y);
  void motion(int x, int y);
  void mouse(int button, int state, int x, int y);
  void reshape(int width, int height);
  void run();
};
