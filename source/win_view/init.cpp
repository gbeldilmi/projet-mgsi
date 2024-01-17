#include <win_view.hpp>

mouse_t *win_view::m_mouse;

void win_view::init(int argc, char **argv)
{
  m_mouse = new mouse_t{vec2_t{0, 0}, 0};

  glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
  glutInitWindowSize(1200, 700);
  glutInitWindowPosition(50, 50);
  glutInit(&argc, argv);
  glEnable(GL_DEPTH_TEST);

  glutCreateWindow("view");
  glutReshapeFunc(reshape);
  glutDisplayFunc(display);
  glutMouseFunc(mouse);
  glutMotionFunc(motion);

  load_texture(1, "resource/t0c.ppm");
  load_texture(2, "resource/t1c.ppm");
  load_texture(3, "resource/t2c.ppm");

  load_texture(1 << 3, "resource/t0n.ppm");
  load_texture(2 << 3, "resource/t1n.ppm");
  load_texture(3 << 3, "resource/t2n.ppm");

  load_texture(1 << 6, "resource/t0d.ppm");



  glMatrixMode(GL_MODELVIEW);
  glutPostRedisplay();
}
