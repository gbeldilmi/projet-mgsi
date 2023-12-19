#include <node.hpp>

void node::remove()
{
  set_parent(nullptr);
  if (get_next()) 
  {
    get_next()->set_prev(get_prev());
  }
  if (get_prev()) 
  {
    get_prev()->set_next(get_next());
  }
  set_next(nullptr);
  set_prev(nullptr);
}
