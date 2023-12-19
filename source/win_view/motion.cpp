#include <win_view.hpp>

void win_view::motion(int x, int y)
{
  switch (m_mouse->button_pressed)
  {
  case GLUT_LEFT_BUTTON:
    g_data->cam->orbit(-(x - m_mouse->pos.x), y - m_mouse->pos.y);
    break;
  case GLUT_RIGHT_BUTTON:
    g_data->cam->zoom(-(y - m_mouse->pos.y));
    break;
  }
  if (m_mouse->button_pressed != -1) {
    m_mouse->pos.x = x;
    m_mouse->pos.y = y;
  }
  glutPostRedisplay();
}
