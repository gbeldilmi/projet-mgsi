#pragma once

#include <camera.hpp>

typedef struct
{
  camera *cam;
} data_model_t;

namespace data_model
{
  data_model_t *init();
} 
