#include <camera.hpp>

camera::camera(float ox, float oy, float oz, float cr, float ctheta, float cphi) 
{
  m_object = new float[3];
  m_camera = new float[3];
  set_object(ox, oy, oz);
  set_camera(cr, ctheta, cphi);
}
