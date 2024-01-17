#include <win_control.hpp>

void win_control::dir_texture(std::vector<std::string> arguments)
{
  if ((arguments.size() < 3) || (arguments.size() > 3)) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"texture"})); //affiche l'aide
  }
  else
  {
    if ((!arguments[1].isInt())) //si le deuxième argument n'est pas un entier
    {
      std::cout << "Erreur : le deuxième argument doit être un entier" << std::endl; //affiche une erreur
      std::cout << "Tapez \u001B[34mhelp texture\u001B[0m pour afficher l'aide" << std::endl; //affiche l'aide
    }
    else if(arguments[0] == "normal") //applique une texture normal map
    {
      m_current_node->set_maps(arguments[1].toInt(), 0, 0); //applique la texture
    }
    else if(arguments[0] == "displacement") //applique une texture displacement map
    {
      m_current_node->set_maps(0, arguments[1].toInt(), 0); //applique la texture
    }
    else if(arguments[0] == "color") //applique une texture color map
    {
      m_current_node->set_maps(0, 0, arguments[1].toInt()); //applique la texture
    }
    else
    {
      std::cout << "Erreur : type de texture inconnu" << std::endl; //affiche une erreur
      std::cout << "Tapez \u001B[34mhelp texture\u001B[0m pour afficher l'aide" << std::endl; //affiche l'aide
    }
  }
}