#include <win_view.hpp>

void win_view::draw_sphere(int maps)
{
    int c = extract_color_map(maps),
        n = extract_normal_map(maps),
        d = extract_displacement_map(maps),
        i, j, slices = 20, stacks = 20;
    float x, y, z, theta, phi, radius = 0.5;

    for (i = 0; i < stacks; ++i)
    {
        glBegin(GL_TRIANGLE_STRIP);
        for (j = 0; j <= slices; ++j)
        {
            theta = (2.0 * M_PI * j) / slices;
            phi = (M_PI * (i + 0.5)) / stacks;

            x = radius * sin(phi) * cos(theta);
            y = radius * cos(phi);
            z = radius * sin(phi) * sin(theta);

            glVertex3f(x, y, z);

            theta = (2.0 * M_PI * (j + 1)) / slices;

            x = radius * sin(phi) * cos(theta);
            y = radius * cos(phi);
            z = radius * sin(phi) * sin(theta);

            glVertex3f(x, y, z);
        }
        glEnd();
    }
}
