#include <win_view.hpp>

void win_view::draw_cylinder(int maps)
{
  int c = extract_color_map(maps),
      n = extract_normal_map(maps),
      d = extract_displacement_map(maps),
      i, j, slices = 20;
  float x, y, z;
  int 
  glBegin(GL_TRIANGLES);
  for (i = 0; i <= slices; ++i)
  {
    x = cosf((2 * M_PI * i) / slices);
    y = sinf((2 * M_PI * i) / slices);
    glVertex3f(x, y, 0.5);
  }
  glEnd();
  glBegin(GL_TRIANGLES);
  for (i = 0; i < slices; i++)
  {
    x = cosf((2 * M_PI * i) / slices);
    y = sinf((2 * M_PI * i) / slices);
    glVertex3f(x, y, -0.5);
  }
  glEnd();
  glBegin(GL_QUADS);
  for (i = 0; i < slices; i++)
  {
    x = cosf((2 * M_PI * i) / slices);
    y = sinf((2 * M_PI * i) / slices);
    glVertex3f(x, y, 0.5);
    glVertex3f(x, y, -0.5);
    glVertex3f(x, y, -0.5);
    glVertex3f(x, y, 0.5);
  }
  glEnd();
}
