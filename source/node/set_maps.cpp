#include <node.hpp>

void node::set_maps(int maps)
{
  this->maps = maps;
}

void node::set_maps(int displacement, int normal, int color)
{
  set_maps(displacement << 6 | normal << 3 | color);
}
