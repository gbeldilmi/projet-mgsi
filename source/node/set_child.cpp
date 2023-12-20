#include <node.hpp>

void node::set_child(node *child)
{
  this->child = child;
  this->type = (child == nullptr) ? NODE_EMPTY : NODE_GROUP;
}
