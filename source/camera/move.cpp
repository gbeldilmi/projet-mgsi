#include <camera.hpp>

void camera::move(float x, float y, float z)
{
  m_pos.x += x;
  m_pos.y += y;
  m_pos.z += z;
}

void camera::move(vec3_t pos)
{
  camera::move(pos.x, pos.y, pos.z);
}
