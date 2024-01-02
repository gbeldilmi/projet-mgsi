#include <win_control.hpp>

void win_control::dir_list(std::vector<std::string> arguments)
{
  if (arguments.size() == 0) // print help
  {
    dir_help(std::vector<std::string>({"list"}));
  }
  else
  {
    // TODO...
  }
}
