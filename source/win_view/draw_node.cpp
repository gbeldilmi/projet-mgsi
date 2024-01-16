#include <win_view.hpp>

void win_view::draw_node(node *node)
{
  glPushMatrix();
  glMultMatrixf(node->get_matrix());
  if (node->get_type() == NODE_GROUP)
  {
    node->get_child()->draw();
  }
  else
  {
    switch (node->get_type())
    {
      case NODE_CUBE:
        draw_cube(node->get_maps());
        break;
      case NODE_SPHERE:
        draw_sphere(node->get_maps());
        break;
      case NODE_CYLINDER:
        draw_cylinder(node->get_maps());
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
  if (node->get_next() != nullptr)
  {
    draw_node(node->get_next());
  }
}
