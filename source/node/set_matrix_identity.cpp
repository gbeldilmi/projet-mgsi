#include <node.hpp>

void node::set_matrix_identity()
{
  int i;
  for (i = 0; i < 16; i++)
  {
    this->matrix[i] = (i % 5 == 0) ? 1.0f : 0.0f;
  }
}
