#include <win_view.hpp>

#include <unistd.h>

void win_view::display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glShadeModel(GL_SMOOTH);
  glLoadIdentity();

  gluLookAt(g_data->cam->get_pos_x(), -g_data->cam->get_pos_y(), g_data->cam->get_pos_z(),
            g_data->cam->get_lat_x(), -g_data->cam->get_lat_y(), g_data->cam->get_lat_z(),
            0.0, 1.0, 0.0);
  glRotatef(g_data->cam->get_ang_x(), 1.0, 0.0, 0.0);
  glRotatef(g_data->cam->get_ang_y(), 0.0, 1.0, 0.0);

  glPushMatrix();
  scene();
  glPopMatrix();
  glutSwapBuffers();
}

