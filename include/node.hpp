#pragma once

#include <stdlib.h>

#define NODE_EMPTY -1
#define NODE_GROUP 0
#define NODE_CUBE 1

class node
{
private:
  node *parent;
  node *next;
  node *prev;
  float *matrix;
  int type;
  node *child;
  void *primitive;
public:
  node();
  node(node *parent, node *next, node *prev, float *matrix, node *child);
  node(node *parent, node *next, node *prev, float *matrix, int primitive_type, void *primitive);
  ~node();
  void set_matrix_identity();
  void set_matrix(float *);
  void set_parent(node *);
  void set_next(node *);
  void set_prev(node *);
  void set_child(node *);
  node *get_parent();
  node *get_next();
  node *get_prev();
  float *get_matrix();
  int get_type();
  node *get_child();
  void *get_primitive();
};
