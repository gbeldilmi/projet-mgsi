#include <win_view.hpp>

void win_view::draw_sphere(int maps)
{
  int c = extract_color_map(maps),
      n = extract_normal_map(maps),
      d = extract_displacement_map(maps),
      i, j, slices = 20, stacks = 20;
  float x, y, z;
  glBegin(GL_TRIANGLE_FAN);
  glVertex3f(0, 0.5, 0);
  for (i = 0; i <= slices; ++i)
  {
    x = cosf((2 * M_PI * i) / slices);
    y = sinf((2 * M_PI * i) / slices);
    glVertex3f(x, y, 0.5);
  }
  glEnd();
  glBegin(GL_TRIANGLE_STRIP);
  for (i = 0; i < stacks; ++i)
  {
    for (j = 0; j <= slices; ++j)
    {
      x = cosf((2 * M_PI * j) / slices) * sinf((M_PI * (i + 1)) / stacks);
      y = sinf((2 * M_PI * j) / slices) * sinf((M_PI * (i + 1)) / stacks);
      z = cosf((M_PI * (i + 1)) / stacks);
      glVertex3f(x, y, z);
      x = cosf((2 * M_PI * j) / slices) * sinf((M_PI * i) / stacks);
      y = sinf((2 * M_PI * j) / slices) * sinf((M_PI * i) / stacks);
      z = cosf((M_PI * i) / stacks);
      glVertex3f(x, y, z);
    }
  }
  glEnd();
  glBegin(GL_TRIANGLE_FAN);
  glVertex3f(0, -0.5, 0);
  for (i = 0; i <= slices; ++i)
  {
    x = cosf((2 * M_PI * i) / slices);
    y = sinf((2 * M_PI * i) / slices);
    glVertex3f(x, y, -0.5);
  }
  glEnd();
}
