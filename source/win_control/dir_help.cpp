#include <win_control.hpp>

void win_control::dir_help(std::vector<std::string> arguments)
{
  if (arguments.size() == 0) // just list all directives
  {
    std::cout << "Available directives:" << std::endl;
    std::cout << "\t\u001B[34m" << "help\u001B[0m: display this help" << std::endl;
    std::cout << "\t\u001B[34m" << "list\u001B[0m: list nodes" << std::endl;
    std::cout << "\t\u001B[34m" << "exit\u001B[0m: exit the program" << std::endl;
    std::cout << "Type \u001B[34mhelp\u001B[0m <directive> for more information on a directive." << std::endl;
  }
  else // display detailed help for a directive
  {
    std::string directive = arguments[0];
    if (directive == "help")
    {
      std::cout << "help: display help" << std::endl;
    }
    else if (directive == "list")
    {
      std::cout << "list: list nodes" << std::endl;
    }
    else if (directive == "exit")
    {
      std::cout << "exit: exit the program" << std::endl;
    }
    else
    {
      std::cout << "\u001B[31mUnknown directive.\u001B[0m" << std::endl;
    }
  }
}
