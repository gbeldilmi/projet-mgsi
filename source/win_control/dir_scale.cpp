#include <win_control.hpp>

void win_control::dir_scale(std::vector<std::string> arguments)
{
  if ((arguments.size() < 3) || (arguments.size() > 3)) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"scale"})); //affiche l'aide
  }
  else if (!arguments[0].isFloat() || !arguments[1].isFloat() || !arguments[2].isFloat()) //si les arguments ne sont pas des nombres
  {
    std::cout << "Erreur : les arguments doivent être des entiers" << std::endl; //affiche une erreur
    dir_help(std::vector<std::string>({"scale"})); //affiche l'aide
  }
  else
  {
    m_current->set_matrix(m_current->get_matrix() * glm::scale(glm::vec3(arguments[0].toFloat(), arguments[1].toFloat(), arguments[2].toFloat()))); //applique la translation
  }
}
