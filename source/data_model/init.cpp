#include <data_model.hpp>

data_model_t *data_model::init()
{
  data_model_t *dm = new data_model_t;
  dm->cam = new camera(0, 0, -10, 0, 0, 0);
  return dm;
}
