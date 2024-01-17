#pragma once

#include <GL/freeglut.h>

#include <mgsi.hpp>

#define extract_color_map(x) (x & 0b000000111)
#define extract_normal_map(x) (x & 0b000111000)
#define extract_displacement_map(x) (x & 0b111000000)

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
  void draw_cube(int);
  void draw_cylinder(int);
  void draw_node(node *);
  void draw_sphere(int);
  void exit();
  void init(int, char **);
  void load_texture(int, const char *);
  void motion(int, int);
  void mouse(int, int, int, int);
  void reshape(int, int);
  void run();
};
