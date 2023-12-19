#pragma once

#include <camera.hpp>
#include <node.hpp>

typedef struct
{
  camera *cam;
  node *tree;
} data_model_t;

namespace data_model
{
  data_model_t *init();
  void free(data_model_t *dm);
} 
