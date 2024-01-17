#include <win_view.hpp>

#include <unistd.h>

void win_view::display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glShadeModel(GL_SMOOTH);
  glLoadIdentity();

  gluLookAt(0, 0, g_data->cam->get_camera_r(),
            g_data->cam->get_object_x(), g_data->cam->get_object_y(), g_data->cam->get_object_z(),
            0.0, -1.0, 0.0);
  glRotatef(g_data->cam->get_camera_theta() * 180 / M_PI, 1.0, 0.0, 0.0);
  glRotatef(g_data->cam->get_camera_phi() * 180 / M_PI, 0.0, 0.0, 1.0);

  draw_node(g_data->tree);
  glutSwapBuffers();
}

