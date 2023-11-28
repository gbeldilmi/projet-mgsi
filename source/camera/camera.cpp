#include <camera.hpp>

camera::camera(float x, float y, float z, float vx, float vy, float vz) : m_pos(vec3_t{x, y, z}), m_ang(vec3_t{vx, vy, vz})
{
}

camera::camera(vec3_t pos, vec3_t ang) : m_pos(pos), m_ang(ang)
{
}
