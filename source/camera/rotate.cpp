#include <camera.hpp>


void camera::rotate(float x, float y, float z)
{
  x *= m_rotation_speed;
  y *= m_rotation_speed;
  z *= m_rotation_speed;
  m_ang.x += x;
  m_ang.y += y;
  m_ang.z += z;
}

void camera::rotate(vec3_t ang)
{
  rotate(ang.x, ang.y, ang.z);
}
