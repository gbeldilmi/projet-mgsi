#include <win_view.hpp>

void win_view::draw_cube(int maps)
{
  int c = extract_color_map(maps),
      n = extract_normal_map(maps),
      d = extract_displacement_map(maps);
  float s = 0.5f;
  glBegin(GL_QUAD_STRIP);
  glVertex3f(-s, -s, -s);
  glVertex3f(s, -s, -s);
  glVertex3f(-s, s, -s);
  glVertex3f(s, s, -s);
  glVertex3f(-s, s, s);
  glVertex3f(s, s, s);
  glVertex3f(-s, -s, s);
  glVertex3f(s, -s, s);
  glVertex3f(-s, -s, -s);
  glVertex3f(s, -s, -s);
  glEnd();
  glBegin(GL_QUADS);
  glVertex3f(-s, -s, -s);
  glVertex3f(-s, s, -s);
  glVertex3f(-s, s, s);
  glVertex3f(-s, -s, s);
  glVertex3f(s, -s, -s);
  glVertex3f(s, s, -s);
  glVertex3f(s, s, s);
  glVertex3f(s, -s, s);
  glEnd();
}
