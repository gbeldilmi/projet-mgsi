#include <camera.hpp>

void camera::set_pos(float x, float y, float z)
{
  set_pos(vec3{x, y, z});
}

void camera::set_pos(vec3 pos)
{
  m_pos = pos;
}
