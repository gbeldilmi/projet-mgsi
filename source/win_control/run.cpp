#include <win_control.hpp>

void win_control::run()
{
  std::string input, directive;
  std::vector<std::string> arguments;
  int exit = 0;
  while (!exit)
  {
    std::cout << "\u001B[32m\t>> ";
    std::getline(std::cin, input);
    std::cout << "\u001B[0m";
    if (input == "exit" || input == "\0") 
    {
      exit = 1;
    } 
    else 
    {
      // extract directive and arguments
      extract_directive(input, directive, arguments);
      exec_cmd(directive, arguments);
    }
  }
}
