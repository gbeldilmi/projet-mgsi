#include <camera.hpp>

void camera::set_camera_r(float r)
{
  if (r < R_MIN)
    r = R_MIN;
  else if (r > R_MAX)
    r = R_MAX;
  m_camera[0] = r;
}
