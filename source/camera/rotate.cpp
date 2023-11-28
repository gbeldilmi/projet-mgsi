#include <camera.hpp>


void camera::rotate(float x, float y, float z)
{
  m_ang.x += x;
  m_ang.y += y;
  m_ang.z += z;
}

void camera::rotate(vec3_t ang)
{
  m_ang.x += ang.x;
  m_ang.y += ang.y;
  m_ang.z += ang.z;
}
