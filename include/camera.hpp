#pragma once

#include <vec3.hpp>

class camera
{
private:
  vec3_t m_pos, m_ang;
public:
  camera(float, float, float, float, float, float);
  camera(vec3_t, vec3_t);
  ~camera();
  vec3_t get_pos();
  float get_pos_x();
  float get_pos_y();
  float get_pos_z();
  vec3_t get_ang();
  float get_ang_x();
  float get_ang_y();
  float get_ang_z();
  void move(float, float, float);
  void move(vec3_t);
  void rotate(float, float, float);
  void rotate(vec3_t);
  void set_pos(vec3_t);
  void set_pos(float, float, float);
  void set_pos_x(float);
  void set_pos_y(float);
  void set_pos_z(float);
  void set_ang(vec3_t);
  void set_ang(float, float, float);
  void set_ang_x(float);
  void set_ang_y(float);
  void set_ang_z(float);
};
