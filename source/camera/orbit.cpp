#include <camera.hpp>

void camera::orbit(float x, float y)
{
  set_camera_phi(get_camera_phi() + x * ORBIT_SPEED);
  set_camera_theta(get_camera_theta() + y * ORBIT_SPEED);
}
