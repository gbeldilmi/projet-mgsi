#include <win_view.hpp>

void win_view::motion(int x, int y)
{
  m_mouse = vec2{x, y};
}
