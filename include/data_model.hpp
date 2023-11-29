#pragma once

#include <camera.hpp>
#include <node.hpp>

typedef struct
{
  camera *cam;
  node *scene;
} data_model_t;

namespace data_model
{
  data_model_t *init();
} 
