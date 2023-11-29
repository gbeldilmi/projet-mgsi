#pragma once

#include <GL/freeglut.h>

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
  void display();
  void exit();
  void init(int, char **);
  void keyboard(unsigned char, int, int);
  void motion(int, int);
  void mouse(int, int, int, int);
  void reshape(int, int);
  void run();
  void scene();
};
