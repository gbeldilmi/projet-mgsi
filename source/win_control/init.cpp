#include <win_control.hpp>

node *win_control::m_node_ptr;

void win_control::init()
{
  m_node_ptr = g_data->tree;
}
