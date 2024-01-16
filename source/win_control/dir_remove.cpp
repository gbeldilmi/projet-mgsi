#include <win_control.hpp>

void win_control::dir_remove(std::vector<std::string> arguments)
{
  if (arguments.size() > 0) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"remove"})); //affiche l'aide
  }
  else
  {
    m_current->remove(); //supprime le noeud courant
  }
}