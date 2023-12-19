#include <win_view.hpp>

void win_view::mouse(int button, int state, int x, int y)
{
  m_mouse->pos.x = x;
  m_mouse->pos.y = y;
  m_mouse->button_pressed = (state == GLUT_DOWN) ? button : -1;
  glutPostRedisplay();
}
