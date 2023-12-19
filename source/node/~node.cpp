#include <node.hpp>

node::~node()
{
  free(this->matrix);
  if (this->parent != nullptr)
  {
    if (this->parent->child == this)
    {
      this->parent->child = nullptr;
    }
  }
  if (this->next != nullptr)
  {
    delete this->next;
  }
  if (this->child != nullptr)
  {
    delete this->child;
  }
}
