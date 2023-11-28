#include <camera.hpp>


void camera::set_vec(float x, float y, float z)
{
  set_vec(vec3{x, y, z});
}

void camera::set_vec(vec3 vec)
{
  m_vec = vec;
}
