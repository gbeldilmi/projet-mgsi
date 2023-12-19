#include <win_control.hpp>

void win_control::run()
{
  std::string input;
  int exit = 0;
  while (!exit)
  {
    print_head();
    std::cout << "\u001B[32m\t>> ";
    std::getline(std::cin, input);
    std::cout << "\u001B[0m";
    if (input == "exit" || input == "\0") {
      exit = 1;
    } else {
      exec_cmd(input);
    }
  }
}
