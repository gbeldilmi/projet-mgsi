#include <data_model.hpp>

data_model *data_model_init()
{
  data_model *dm = new data_model;
  dm->cam = new camera(0, 0, 0, 0, 0, 0);
  return dm;
}
