#include <camera.hpp>

camera::camera(float x, float y, float z, float vx, float vy, float vz) : m_pos(vec3{x, y, z}), m_vec(vec3{vx, vy, vz})
{
}

camera::camera(vec3 pos, vec3 vec) : m_pos(pos), m_vec(vec)
{
}
