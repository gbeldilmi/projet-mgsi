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
      std::cout << "help: affiche l'aide" << std::endl;
      std::cout << "Usage: help <directive>" << std::endl;
      std::cout << "Valeurs possibles pour <directive>: help, list, exit, add, remove, rotate, translate, scale, texture, ls, cd" << std::endl;
    }
    else if (directive == "exit")
    {
      std::cout << "exit: quitte le programme" << std::endl;
    }
    else if (directive == "add")
    {
      std::cout << "add: ajoute une primitive à la scène" << std::endl;
      std::cout << "Usage: add <primitive> <primitive>" << std::endl;
      std::cout << "Valeurs possibles pour <primitive>: cube, sphere, cylindre" << std::endl;
    }
    else if (directive == "remove")
    {
      std::cout << "remove: supprime le noeud courant" << std::endl;
      std::cout << "Usage: remove" << std::endl;
      std::cout << "Ne prend pas d'arguments" << std::endl;
    }
    else if (directive == "rotate")
    {
      std::cout << "rotate: tourne une primitive" << std::endl;
      std::cout << "Usage: rotate <angle en x> <angle en y> <angle en z>" << std::endl;
      std::cout << "Les angles doivent être des nombres" << std::endl;
    }
    else if (directive == "translate")
    {
      std::cout << "translate: déplace une primitive" << std::endl;
      std::cout << "Usage: translate <x> <y> <z>" << std::endl;
      std::cout << "Les valeurs doivent être des nombres" << std::endl;
    }
    else if (directive == "scale")
    {
      std::cout << "scale: redimensionne une primitive" << std::endl;
      std::cout << "Usage: scale <x> <y> <z>" << std::endl;
      std::cout << "Les valeurs doivent être des nombres" << std::endl;
    }
    else if (directive == "texture")
    {
      std::cout << "texture: applique une texture à une primitive" << std::endl;
      std::cout << "Usage: texture <type> <fichier>" << std::endl;
      std::cout << "Valeurs possibles pour <type>: normal, displacement, color" << std::endl;
    }
    else if (directive == "ls")
    {
      std::cout << "ls: liste les noeuds voisins et fils du noeud courant" << std::endl;
      std::cout << "Usage: ls" << std::endl;
      std::cout << "Ne prend pas d'arguments" << std::endl;
    }
    else if (directive == "cd")
    {
      std::cout << "cd: change de noeud" << std::endl;
      std::cout << "Usage: cd <noeud>" << std::endl;
      std::cout << "Valeurs possibles pour <noeud>: parent (noeud parent), child (premier noeud enfant), next (noeud suivant), previous (noeud précédent)" << std::endl;
    }
    else if (directive == nullptr)
    {
      std::cout << "Listes des directives disponibles:" << std::endl;
      std::cout << "\t\u001B[34m" << "help\u001B[0m: affiche l'aide" << std::endl;
      std::cout << "\t\u001B[34m" << "ls\u001B[0m: liste les noeuds voisins et fils du noeud courant" << std::endl;
      std::cout << "\t\u001B[34m" << "cd\u001B[0m: change de noeud" << std::endl;
      std::cout << "\t\u001B[34m" << "add\u001B[0m: ajoute une primitive à la scène" << std::endl;
      std::cout << "\t\u001B[34m" << "remove\u001B[0m: supprime le noeud courant" << std::endl;
      std::cout << "\t\u001B[34m" << "rotate\u001B[0m: tourne une primitive" << std::endl;
      std::cout << "\t\u001B[34m" << "translate\u001B[0m: déplace une primitive" << std::endl;
      std::cout << "\t\u001B[34m" << "scale\u001B[0m: redimensionne une primitive" << std::endl;
      std::cout << "\t\u001B[34m" << "texture\u001B[0m: applique une texture à une primitive" << std::endl;
      std::cout << "\t\u001B[34m" << "exit\u001B[0m: quitte le programme" << std::endl;
      std::cout << "Tapez \u001B[34mhelp\u001B[0m <directive> pour plus d'informations sur une directive." << std::endl;
    }
    else
    {
      std::cout << "Directive inconnue" << std::endl;
    }
  }
}
