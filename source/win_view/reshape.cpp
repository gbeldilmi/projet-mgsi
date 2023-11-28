#include <win_view.hpp>

void win_view::reshape(int width, int height)
{
  m_window_size = vec2{width, height};
  glViewport(0, 0, width, height);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);
  //             60.0                                     1.0   20.0
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}
