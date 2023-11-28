#include <camera.hpp>


void camera::set_ang(float x, float y, float z)
{
  set_ang(vec3_t{x, y, z});
}

void camera::set_ang(vec3_t ang)
{
  m_ang = ang;
}
