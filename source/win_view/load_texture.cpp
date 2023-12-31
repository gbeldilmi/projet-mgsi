#include <win_view.hpp>

#include <stdio.h>
#include <string.h>

static unsigned char *read_ppm(const char *filename, int *width, int *height)
{
  // Read a PPM file and return a pointer to the data
  // The width and height of the image are stored in the given pointers
  FILE *fp = fopen(filename, "rb");
  unsigned char *data;
  char header[256];
  int w, h, maxval;
  if (!fp)
  {
    fprintf(stderr, "Unable to open file '%s'\n", filename);
    return NULL;
  }
  fgets(header, 256, fp);
  if (strncmp(header, "P6", 2))
  {
    fprintf(stderr, "File '%s' is not a PPM file\n", filename);
    fclose(fp);
    return NULL;
  }
  fscanf(fp, "%d %d %d\n", &w, &h, &maxval);
  data = (unsigned char *)malloc(w * h * 3);
  fread(data, 1, w * h * 3, fp);
  fclose(fp);
  *width = w;
  *height = h;
  return data;
}

void win_view::load_texture(int id, const char *texture_name)
{
  // Load the texture from the file and store it with the given index
  int with, height;
  unsigned char *data = read_ppm(texture_name, &with, &height);
  glBindTexture(GL_TEXTURE_2D, id);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, with, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
  free(data);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
}
