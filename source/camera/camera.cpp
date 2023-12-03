#include <camera.hpp>

camera::camera(float x, float y, float z, float vx, float vy, float vz, float move_speed, float rotation_speed)
  : m_pos(vec3_t{x, y, z}), m_ang(vec3_t{vx, vy, vz}), m_move_speed(move_speed), m_rotation_speed(rotation_speed)
{
  m_lat = vec3_t{0.0f, 0.0f, 0.0f};
}

camera::camera(vec3_t pos, vec3_t ang, float move_speed, float rotation_speed)
  : m_pos(pos), m_ang(ang), m_move_speed(move_speed), m_rotation_speed(rotation_speed)
{
  m_lat = vec3_t{0.0f, 0.0f, 0.0f};
}
