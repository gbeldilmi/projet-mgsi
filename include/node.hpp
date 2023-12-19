#pragma once

#include <stdlib.h>
#include <GL/freeglut.h>

#define NODE_EMPTY -1
#define NODE_GROUP 0
#define NODE_CUBE 1
#define NODE_WIRE_CUBE 2
#define NODE_SPHERE 3
#define NODE_WIRE_SPHERE 4
#define NODE_CONE 5
#define NODE_WIRE_CONE 6
#define NODE_TORUS 7
#define NODE_WIRE_TORUS 8
#define NODE_TEAPOT 9
#define NODE_WIRE_TEAPOT 10
#define NODE_ICOSAHEDRON 11
#define NODE_WIRE_ICOSAHEDRON 12
#define NODE_OCTAHEDRON 13
#define NODE_WIRE_OCTAHEDRON 14
#define NODE_TETRAHEDRON 15
#define NODE_WIRE_TETRAHEDRON 16
#define NODE_DODECAHEDRON 17
#define NODE_WIRE_DODECAHEDRON 18

class node
{
private:
  node *parent;
  node *next;
  node *prev;
  float *matrix;
  int type;
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
  node *get_parent();
  node *get_next();
  node *get_prev();
  float *get_matrix();
  int get_type();
  node *get_child();
  void *get_primitive();
  void group(int type);
  void group(node *);
  void remove();
  void draw();
};
