#include <win_view.hpp>

mouse_t *win_view::m_mouse;

void win_view::init(int argc, char **argv)
{
	m_mouse = new mouse_t{vec2_t{0, 0}, 0};

  glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(50, 50);
	glutInit(&argc, argv);
	glEnable(GL_DEPTH_TEST);

	glutCreateWindow("view");
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutMotionFunc(motion);
	glutKeyboardFunc(keyboard);
	
	glutSetCursor(GLUT_CURSOR_CROSSHAIR);
}
