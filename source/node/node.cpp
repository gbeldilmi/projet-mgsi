#include <node.hpp>

node::node()
{
  set_parent(nullptr);
  set_next(nullptr);
  set_prev(nullptr);
  this->matrix = (float *)malloc(sizeof(float) * 16);
  set_matrix_identity();
  this->type = NODE_EMPTY;
  this->child = nullptr;
  this->primitive = nullptr;
}


node::node(node *parent, node *next, node *prev)
{
  set_parent(parent);
  set_next(next);
  set_prev(prev);
  this->matrix = (float *)malloc(sizeof(float) * 16);
  set_matrix_identity();
  this->type = NODE_EMPTY;
  this->child = nullptr;
  this->primitive = nullptr;
}

node::node(node *parent, node *next, node *prev, node *child)
{
  set_parent(parent);
  set_next(next);
  set_prev(prev);
  this->matrix = (float *)malloc(sizeof(float) * 16);
  set_matrix_identity();
  this->type = (child == nullptr) ? NODE_EMPTY : NODE_GROUP;
  this->child = child;
  this->primitive = nullptr;
}

node::node(node *parent, node *next, node *prev, int type, void *primitive)
{
  set_parent(parent);
  set_next(next);
  set_prev(prev);
  this->matrix = (float *)malloc(sizeof(float) * 16);
  set_matrix_identity();
  this->type = type;
  this->child = nullptr;
  this->primitive = primitive;
}

node::node(node *parent, node *next, node *prev, float *matrix, node *child)
{
  set_parent(parent);
  set_next(next);
  set_prev(prev);
  this->matrix = (float *)malloc(sizeof(float) * 16);
  set_matrix(matrix);
  this->type = (child == nullptr) ? NODE_EMPTY : NODE_GROUP;
  this->child = child;
  this->primitive = nullptr;
}

node::node(node *parent, node *next, node *prev, float *matrix, int type, void *primitive)
{
  set_parent(parent);
  set_next(next);
  set_prev(prev);
  this->matrix = (float *)malloc(sizeof(float) * 16);
  set_matrix(matrix);
  this->type = type;
  this->child = nullptr;
  this->primitive = primitive;
}

node::node(node *parent, node *next, node *prev, float *matrix, int type, node *child, void *primitive)
{
  set_parent(parent);
  set_next(next);
  set_prev(prev);
  this->matrix = (float *)malloc(sizeof(float) * 16);
  set_matrix(matrix);
  this->type = type;
  this->child = child;
  this->primitive = primitive;
}
