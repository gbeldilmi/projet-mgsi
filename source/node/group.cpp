#include <node.hpp>

void node::group(int type)
{
  node *b1, *b2;
  if (get_type() == NODE_GROUP)
  {
    b1 = new node(this, nullptr, nullptr, get_matrix(), get_child());
  }
  else
  {
    b1 = new node(this, nullptr, nullptr, get_matrix(), get_type());
  }
  b2 = new node(this, nullptr, b1, type);
  b1->set_next(b2);

  set_matrix_identity();
  set_child(b1);
}

void node::group(node *n)
{
  node *baby;
  if (get_type() == NODE_GROUP)
  {
    baby = new node(this, nullptr, nullptr, get_matrix(), get_child());
  }
  else
  {
    baby = new node(this, nullptr, nullptr, get_matrix(), get_type());
  }
  set_matrix_identity();
  set_child(baby);

  n->remove();
  n->set_parent(this);
  n->set_prev(baby);
}
