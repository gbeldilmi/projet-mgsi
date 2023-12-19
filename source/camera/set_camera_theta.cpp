#include <camera.hpp>

void camera::set_camera_theta(float theta)
{
  if (theta < THETA_MIN)
    theta = THETA_MIN;
  else if (theta > THETA_MAX)
    theta = THETA_MAX;
  m_camera[1] = theta;
}
