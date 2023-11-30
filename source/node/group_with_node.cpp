#include <node.hpp>

void node::group_with_node(node *n)
{
  node *baby = new node(this, n, nullptr, get_matrix(), get_type(), get_child(), get_primitive());

  set_matrix_identity();
  set_child(baby);
  set_primitive(NODE_GROUP, nullptr);

  n->remove();
  n->set_parent(this);
  n->set_prev(baby);
}
