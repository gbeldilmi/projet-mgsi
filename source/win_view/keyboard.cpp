#include <win_view.hpp>

#include <iostream>

void win_view::keyboard(unsigned char key, int x, int y)
{
  switch (key)
  {
  default:
    std::cout << "key: " << key << "(" << x << "," << y << ")" << std::endl;
    break;
  }
  glutPostRedisplay();
}
