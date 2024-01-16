#include <win_control.hpp>

void win_control::exec_cmd(std::string directive, std::vector<std::string> arguments)
{
  // redirect to the appropriate function
  if (directive == "help")
  {
    dir_help(arguments);
  }
  else if (directive == "list")
  {
    dir_list(arguments);
  }
  else if (directive == "node")
  {
    dir_node(arguments);
  }
  // ... add more directives here
  else
  {
    if (directive != "help")
    {
      std::cout << "\u001B[31mUnknown directive.\u001B[0m" << std::endl;
    }
    dir_help(std::vector<std::string>());
  }
}
