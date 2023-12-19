#include <camera.hpp>

camera::~camera()
{
  delete[] m_object;
  delete[] m_camera;
}
