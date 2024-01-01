#include <node.hpp>

void node::init(node *parent, node *next, node *prev, float *matrix, int type, node *child)
{
  set_parent(parent);
  set_next(next);
  set_prev(prev);
  allocate_matrix(matrix);
  set_child(child);
  set_type(type);
  set_maps((1 << 6) | (1 << 3) | (1 << 0));
}
