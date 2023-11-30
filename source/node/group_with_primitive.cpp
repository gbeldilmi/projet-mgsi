#include <node.hpp>

void node::group_with_primitive(int type, void *primitive)
{
  node *b1 = new node(this, nullptr, nullptr, get_matrix(), get_type(), get_child(), get_primitive());
  node *b2 = new node(this, nullptr, b1, type, primitive);
  b1->set_next(b2);

  set_child(b1);
  set_matrix_identity();
  set_primitive(NODE_GROUP, nullptr);
}
