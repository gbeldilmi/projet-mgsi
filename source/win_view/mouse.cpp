#include <win_view.hpp>

void win_view::mouse(int button, int state, int x, int y)
{
  m_mouse->pos.x = x;
  m_mouse->pos.y = y;
  if (state == GLUT_DOWN)
  {
    switch (m_mouse->button_pressed = button)
    {
    case GLUT_LEFT_BUTTON:
      break;
    case GLUT_MIDDLE_BUTTON:
      break;
    case GLUT_RIGHT_BUTTON:
      break;    
    default:
      break;
    }
  }
  else if (state == GLUT_UP)
  {
    m_mouse->button_pressed = -1;
  }
  glutPostRedisplay();
}
