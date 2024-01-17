#pragma once

#include <GL/freeglut.h>

#include <mgsi.hpp>

// macros for extracting maps from maps id
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
  extern mouse_t *m_mouse; // mouse object (used to get mouse position and button pressed)
  // display function
  void display();
  // draw nodes recursively
  void draw_node(node *);
  // draw primitives
  void draw_cube(int);
  void draw_cylinder(int);
  void draw_sphere(int);
  // exit the program
  void exit();
  // initialize and run
  void init(int, char **);
  void run();
  // load texture from file
  void load_texture(int, const char *);
  // mouse and keyboard functions (used to handle user interaction)
  void motion(int, int);
  void mouse(int, int, int, int);
  void reshape(int, int);
};
