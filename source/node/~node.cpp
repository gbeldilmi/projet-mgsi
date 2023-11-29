#include <node.hpp>

node::~node()
{
  if (this->data != nullptr)
  {
    delete this->data;
  }
  ////////////////////////////////////////
}
