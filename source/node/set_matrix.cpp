#include <node.hpp>

void node::set_matrix(float *matrix)
{
  int i;
  for (i = 0; i < 16; i++)
  {
    this->matrix[i] = matrix[i];
  }
}
