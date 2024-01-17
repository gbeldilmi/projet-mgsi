#include <win_control.hpp>

void win_control::dir_texture(std::vector<std::string> arguments)
{
  if ((arguments.size() < 2) || (arguments.size() > 2)) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"texture"})); //affiche l'aide
  }
  else
  {
    if ((stoi(arguments[1]) == NULL) || (stoi(arguments[1]) <= 0)) //si le deuxième argument n'est pas un entier supérieur à 0
    {
      std::cout << "Erreur : le deuxième argument doit être un entier supérieur à 0" << std::endl; //affiche une erreur
      std::cout << "Tapez \u001B[34mhelp texture\u001B[0m pour afficher l'aide" << std::endl; //affiche l'aide
    }
    else if(arguments[0] == "normal") //applique une texture normal map
    {
      m_current->set_maps(stoi(arguments[1]), 1, 1); //applique la texture
    }
    else if(arguments[0] == "displacement") //applique une texture displacement map
    {
      m_current->set_maps(1, stoi(arguments[1]), 1); //applique la texture
    }
    else if(arguments[0] == "color") //applique une texture color map
    {
      m_current->set_maps(1, 1, stoi(arguments[1])); //applique la texture
    }
    else
    {
      std::cout << "Erreur : type de texture inconnu" << std::endl; //affiche une erreur
      std::cout << "Tapez \u001B[34mhelp texture\u001B[0m pour afficher l'aide" << std::endl; //affiche l'aide
    }
  }
}