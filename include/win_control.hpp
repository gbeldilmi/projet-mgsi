#pragma once

#include <vec2.hpp>
#include <data_model.hpp>

class win_control
{
private:
  vec2 m_window_size;
  data_model *m_dm;
public:
  win_control(data_model *dm);
  ~win_control();
};
