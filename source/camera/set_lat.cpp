#include <camera.hpp>


void camera::set_lat(float x, float y, float z)
{
  set_lat(vec3_t{x, y, z});
}

void camera::set_lat(vec3_t lat)
{
  m_lat = lat;
}
