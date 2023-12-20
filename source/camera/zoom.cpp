#include <camera.hpp>

void camera::zoom(float z)
{
  set_camera_r(m_camera[0] + z);
}
