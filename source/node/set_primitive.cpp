#include <node.hpp>

void node::set_primitive(int type, void *primitive)
{
  this->type = type;
  if (this->primitive)
  {
    free(this->primitive);
  }
  this->primitive = primitive;
}
