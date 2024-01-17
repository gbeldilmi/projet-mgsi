#pragma once

#include <cmath>

#define ORBIT_SPEED 0.01
#define ZOOM_SPEED 1

#define EPSILON 0.01f
#define R_MIN 2.0f
#define R_MAX 100.0f
#define THETA_MIN 0 + EPSILON
#define THETA_MAX M_PI - EPSILON

class camera
{
private:
  // m_object is the object's coordinates that the camera is looking at (in cartesian coordinates)
  // m_camera is the camera's coordinates (using spherical coordinates, r, theta, phi)
  float *m_object, *m_camera;
public:
  camera(float, float, float, float, float, float);
  ~camera();
  float get_camera_r();
  float get_camera_theta();
  float get_camera_phi();
  float get_object_x();
  float get_object_y();
  float get_object_z();
  void orbit(float, float);
  void set_camera(float, float, float);
  void set_camera_r(float);
  void set_camera_theta(float);
  void set_camera_phi(float);
  void set_object(float, float, float);
  void set_object_x(float);
  void set_object_y(float);
  void set_object_z(float);
  void zoom(float);
};
