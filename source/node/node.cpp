#include <node.hpp>

node::node()
{
  init(nullptr, nullptr, nullptr, nullptr, NODE_EMPTY, nullptr);
}

node::node(node *clone)
{
  init(clone->get_parent(), clone->get_next(), clone->get_prev(), clone->get_matrix(), clone->get_type(), clone->get_child());
}

node::node(node *parent, node *next, node *prev)
{
  init(parent, next, prev, nullptr, NODE_EMPTY, nullptr);
}

node::node(node *parent, node *next, node *prev, int type)
{
  init(parent, next, prev, nullptr, type, nullptr);
}

node::node(node *parent, node *next, node *prev, node *child)
{
  init(parent, next, prev, nullptr, NODE_GROUP, child);
}

node::node(node *parent, node *next, node *prev, float *matrix, int type)
{
  init(parent, next, prev, matrix, type, nullptr);
}

node::node(node *parent, node *next, node *prev, float *matrix, node *child)
{
  init(parent, next, prev, matrix, NODE_GROUP, child);
}
