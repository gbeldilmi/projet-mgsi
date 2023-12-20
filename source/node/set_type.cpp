#include <node.hpp>

void node::set_type(int type)
{
  if (type == NODE_GROUP)
  {
    this->type = (get_child() == nullptr) ? NODE_EMPTY : NODE_GROUP;
  }
  else
  {
    this->type = type;
  }
}
