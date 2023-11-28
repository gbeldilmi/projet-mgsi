#include <win_view.hpp>

void win_view::mouse(int button, int state, int x, int y)
{
  m_mouse = vec2{x, y};
  if (state == GLUT_DOWN)
  {
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
      //
      break;
    case GLUT_MIDDLE_BUTTON:
      //
      break;
    case GLUT_RIGHT_BUTTON:
      //
      break;
    default:
      break;
    }
  }
  else if (state == GLUT_UP)
  {
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
      //
      break;
    case GLUT_MIDDLE_BUTTON:
      //
      break;
    case GLUT_RIGHT_BUTTON:
      //
      break;
    default:
      break;
    }
  }
}
