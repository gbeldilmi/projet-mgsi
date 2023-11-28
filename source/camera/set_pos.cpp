#include <camera.hpp>

void camera::set_pos(float x, float y, float z)
{
  set_pos(vec3_t{x, y, z});
}

void camera::set_pos(vec3_t pos)
{
  m_pos = pos;
}
