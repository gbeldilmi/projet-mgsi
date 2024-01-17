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
  // constructor with first 3 parameters being the object's coordinates and the last 3 being the camera's coordinates
  camera(float, float, float, float, float, float);
  ~camera(); // destructor
  // camera functions using spherical coordinates
  void orbit(float, float); // orbit around the object (with 2d mouse movement in x and y on screen)
  void zoom(float); // zoom in (negative value) or out (positive value)
  // getters and setters
  float get_camera_r();
  float get_camera_theta();
  float get_camera_phi();
  float get_object_x();
  float get_object_y();
  float get_object_z();
  void set_camera(float, float, float);
  void set_camera_r(float);
  void set_camera_theta(float);
  void set_camera_phi(float);
  void set_object(float, float, float);
  void set_object_x(float);
  void set_object_y(float);
  void set_object_z(float);
};
