#include <data_model.hpp>

void data_model::free(data_model_t *dm)
{
  delete dm->cam;
  delete dm->tree;
  delete dm;
}
