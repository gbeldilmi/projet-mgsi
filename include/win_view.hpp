#pragma once

#include <GL/glut.h>

#include <vec2.hpp>
#include <data_model.hpp>

class win_view
{
private:
  vec2 m_window_size, m_mouse;
  data_model *m_dm;
public:
  win_view(data_model *dm);
  ~win_view();
  void keyboard(unsigned char key, int x, int y);
  void motion(int x, int y);
  void mouse(int button, int state, int x, int y);
  void reshape(int width, int height);
};
