#include <win_control.hpp>

node *win_control::m_current;

void win_control::init()
{
  // save current node
  m_current = g_data->tree;
}
