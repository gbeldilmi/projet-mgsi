#include <node.hpp>

void node::draw()
{
  glPushMatrix();
  glMultMatrixf(this->get_matrix());

  // for debuging purpose
  glBegin(GL_LINES);
  glColor3f(1.0, 0.0, 0.0);
  glVertex3f(0.0, 0.0, 0.0);
  glVertex3f(1.0, 0.0, 0.0);
  glColor3f(0.0, 1.0, 0.0);
  glVertex3f(0.0, 0.0, 0.0);
  glVertex3f(0.0, 1.0, 0.0);
  glColor3f(0.0, 0.0, 1.0);
  glVertex3f(0.0, 0.0, 0.0);
  glVertex3f(0.0, 0.0, 1.0);
  glColor3f(1.0, 1.0, 1.0);
  glEnd();

  if (get_type() == NODE_GROUP)
  {
    get_child()->draw();
  }
  else
  {
    switch (get_type())
    {
      case NODE_CUBE:
        glutSolidCube(1.0);
        break;
      case NODE_WIRE_CUBE:
        glutWireCube(1.0);
        break;
      case NODE_SPHERE:
        glutSolidSphere(0.5, 20, 20);
        break;
      case NODE_WIRE_SPHERE:
        glutWireSphere(0.5, 20, 20);
        break;
      case NODE_CONE:
        glutSolidCone(0.5, 1.0, 20, 20);
        break;
      case NODE_WIRE_CONE:
        glutWireCone(0.5, 1.0, 20, 20);
        break;
      case NODE_TORUS:
        glutSolidTorus(0.25, 0.5, 20, 20);
        break;
      case NODE_WIRE_TORUS:
        glutWireTorus(0.25, 0.5, 20, 20);
        break;
      case NODE_TEAPOT:
        glutSolidTeapot(0.5);
        break;
      case NODE_WIRE_TEAPOT:
        glutWireTeapot(0.5);
        break;
      case NODE_ICOSAHEDRON:
        glutSolidIcosahedron();
        break;
      case NODE_WIRE_ICOSAHEDRON:
        glutWireIcosahedron();
        break;
      case NODE_OCTAHEDRON:
        glutSolidOctahedron();
        break;
      case NODE_WIRE_OCTAHEDRON:
        glutWireOctahedron();
        break;
      case NODE_TETRAHEDRON:
        glutSolidTetrahedron();
        break;
      case NODE_WIRE_TETRAHEDRON:
        glutWireTetrahedron();
        break;
      case NODE_DODECAHEDRON:
        glutSolidDodecahedron();
        break;
      case NODE_WIRE_DODECAHEDRON:
        glutWireDodecahedron();
        break;
      default:
        glBegin(GL_LINES);
        glVertex3f(-0.5, -0.5, -0.5);
        glVertex3f(0.5, 0.5, 0.5);
        glVertex3f(-0.5, -0.5, 0.5);
        glVertex3f(0.5, 0.5, -0.5);
        glVertex3f(-0.5, 0.5, -0.5);
        glVertex3f(0.5, -0.5, 0.5);
        glVertex3f(-0.5, 0.5, 0.5);
        glVertex3f(0.5, -0.5, -0.5);
        glEnd();
    }
  }
  glPopMatrix();
  if (get_next() != nullptr)
  {
    get_next()->draw();
  }
}
