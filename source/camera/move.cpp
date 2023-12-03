#include <camera.hpp>

void camera::move(float x, float y, float z)
{
  x *= m_move_speed;
  y *= m_move_speed;
  z *= m_move_speed;
  m_pos.x += x;
  m_pos.y += y;
  m_pos.z += z;
  m_lat.x += x;
  m_lat.y += y;
  m_lat.z += z;
}

void camera::move(vec3_t pos)
{
  move(pos.x, pos.y, pos.z);
}
