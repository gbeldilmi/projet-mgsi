#include <node.hpp>

void node::allocate_matrix()
{
  this->matrix = (float *)malloc(sizeof(float) * 16);
  set_matrix_identity();
}

void node::allocate_matrix(float *m)
{
  this->matrix = (float *)malloc(sizeof(float) * 16);
  if (m != nullptr)
  {
    set_matrix(m);
  }
  else
  {
    set_matrix_identity();
  }
}
