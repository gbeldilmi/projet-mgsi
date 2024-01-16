#pragma once

#include <stdlib.h>

#define NODE_EMPTY -1
#define NODE_GROUP 0
#define NODE_CUBE 1
#define NODE_SPHERE 2
#define NODE_CYLINDER 3

class node
{
private:
  node *parent;
  node *next;
  node *prev;
  float *matrix;
  int type;
  int maps;
  node *child;
  void allocate_matrix();
  void allocate_matrix(float *);
  void init(node *parent, node *next, node *prev, float *matrix, int type, node *child);
public:
  node();
  node(node *clone);
  node(node *parent, node *next, node *prev);
  node(node *parent, node *next, node *prev, node *child);
  node(node *parent, node *next, node *prev, int type);
  node(node *parent, node *next, node *prev, float *matrix, node *child);
  node(node *parent, node *next, node *prev, float *matrix, int type);
  ~node();
  void set_matrix_identity();
  void set_matrix(float *);
  void set_parent(node *);
  void set_next(node *);
  void set_prev(node *);
  void set_child(node *);
  void set_type(int);
  void set_maps(int);
  node *get_parent();
  node *get_next();
  node *get_prev();
  float *get_matrix();
  int get_type();
  int get_maps();
  node *get_child();
  void *get_primitive();
  void group(int type);
  void group(node *);
  void remove();
  void draw();
};
