#pragma once

#include <camera.hpp>
#include <node.hpp>

typedef struct
{
  camera *cam; // camera object
  node *tree;  // scene root
} data_model_t;

namespace data_model
{
  data_model_t *init(); // initialize data model
  void free(data_model_t *dm); // free allocated memory
} 
