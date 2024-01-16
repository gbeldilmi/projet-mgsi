#include <win_control.hpp>

void win_control::dir_texture(std::vector<std::string> arguments)
{
  if ((arguments.size() < 1) || (arguments.size() > 1)) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"texture"})); //affiche l'aide
  }
  else
  {
    
  }
}