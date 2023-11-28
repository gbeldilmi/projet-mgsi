#include <win_view.hpp>

void win_view::display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  //glLoadIdentity();

  glutWireCube(10.0);
  
  //gluLookAt(0.0, 1.0, 20.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0);
  gluLookAt(g_data->cam->get_pos_x(), g_data->cam->get_pos_y(), g_data->cam->get_pos_z(), 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
  //glTranslatef(g_data->cam->get_pos_x(), g_data->cam->get_pos_y(), g_data->cam->get_pos_z());
  
  glRotatef(g_data->cam->get_ang_x(), 1.0, 0.0, 0.0);
  glRotatef(g_data->cam->get_ang_y(), 0.0, 1.0, 0.0);

  glutSwapBuffers();
  //glutPostRedisplay();
}

