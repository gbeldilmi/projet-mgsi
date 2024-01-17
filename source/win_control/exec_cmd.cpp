#include <win_control.hpp>

void win_control::exec_cmd(std::string directive, std::vector<std::string> arguments)
{
  // redirect to the appropriate function
  if (directive == "help")
  {
    dir_help(arguments);
  }
  
  else if (directive == "add") //ajoute une primitive
  {
    dir_add(arguments);
  }
  else if (directive == "remove") //supprime une primitive
  {
    dir_remove(arguments);
  }
  else if (directive == "rotate")  //tourne une primitive
  {
    dir_rotate(arguments);
  }
  else if (directive == "translate") //déplace une primitive
  {
    dir_translate(arguments);
  }
  else if (directive == "scale") //redimensionne une primitive
  {
    dir_scale(arguments);
  }
  else if (directive == "texture") //applique une texture à une primitive
  {
    dir_texture(arguments);
  }
  else if (directive == "ls") //liste les primitives
  {
    dir_ls(arguments);
  }
  else if (directive == "cd") //change de noeud
  {
    dir_cd(arguments);
  }
  else
  {
    if (directive != "help")
    {
      std::cout << "Erreur : directive inconnue" << std::endl; //affiche une erreur
      std::cout << "Tapez \u001B[34mhelp\u001B[0m pour afficher l'aide" << std::endl; //affiche l'aide
    }
    dir_help(std::vector<std::string>());
  }
}
