#pragma once

#include <vec3.hpp>

class camera
{
private:
  vec3 m_pos, m_vec;
public:
  camera(float, float, float, float, float, float);
  camera(vec3, vec3);
  ~camera();
  vec3 get_pos();
  vec3 get_vec();
  void move(float, float, float);
  void move(vec3);
  void set_pos(vec3);
  void set_pos(float, float, float);
  void set_pos_x(float);
  void set_pos_y(float);
  void set_pos_z(float);
  void set_vec(vec3);
  void set_vec(float, float, float);
  void set_vec_x(float);
  void set_vec_y(float);
  void set_vec_z(float);
};
