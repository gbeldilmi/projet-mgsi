#include <node.hpp>

node::node()
{
  this->parent = nullptr;
  this->next = nullptr;
  this->prev = nullptr;
  this->child = nullptr;
  this->data = nullptr;
}

node::node(node *parent, node *next, node *prev, node *child, void *data)
{
  this->parent = parent;
  this->next = next;
  this->prev = prev;
  this->child = child;
  this->data = data;
}
