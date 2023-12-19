#pragma once

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
  void motion(int, int);
  void mouse(int, int, int, int);
  void reshape(int, int);
  void run();
};
