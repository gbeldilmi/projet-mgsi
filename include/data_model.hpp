#pragma once

#include <camera.hpp>

typedef struct
{
  camera *cam;
} data_model;

data_model *data_model_init();
