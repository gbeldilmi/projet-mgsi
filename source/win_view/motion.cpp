#include <win_view.hpp>

void win_view::motion(int x, int y)
{
  switch (m_mouse->button_pressed)
  {
  case GLUT_LEFT_BUTTON:
    g_data->cam->rotate(x - m_mouse->pos.x, y - m_mouse->pos.y, 0.0f);
    break;
  case GLUT_MIDDLE_BUTTON:
    g_data->cam->move(0.0f, 0.0f, y - m_mouse->pos.y);
    break;
  case GLUT_RIGHT_BUTTON:
    g_data->cam->move(x - m_mouse->pos.x, y - m_mouse->pos.y, 0.0f);
    break;
  }
  glutPostRedisplay();
}
