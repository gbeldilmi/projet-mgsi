#include <win_control.hpp>

void win_control::dir_add(std::vector<std::string> arguments)
{
  if ((arguments.size() == 0) || (arguments.size() > 1)) // si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"add"})); // affiche l'aide
  }
  else
  {
    if (arguments[0] == "cube")
    {
      if (m_current->get_type() == NODE_EMPTY) // si le noeud courant est vide
      {
        m_current->set_type(NODE_CUBE); // change le type du noeud courant
      }
      else
      {
        m_current->group(NODE_CUBE); // crée un nouveau noeud et l'ajoute au noeud courant
      }
      std::cout << "Cube ajouté" << std::endl; // affiche un message de confirmation
    }
    else if (arguments[0] == "sphere")
    {
      if (m_current->get_type() == NODE_EMPTY) // si le noeud courant est vide
      {
        m_current->set_type(NODE_SPHERE); // change le type du noeud courant
      }
      else
      {
        m_current->group(NODE_SPHERE); // crée un nouveau noeud et l'ajoute au noeud courant
      }
    }
    else if (arguments[0] == "cylindre")
    {
      if (m_current->get_type() == NODE_EMPTY) // si le noeud courant est vide
      {
        m_current->set_type(NODE_CYLINDER); // change le type du noeud courant
      }
      else
      {
        m_current->group(NODE_CYLINDER); // crée un nouveau noeud et l'ajoute au noeud courant
      }
    }
    else
    {
      std::cout << "Erreur : primitive inconnue" << std::endl; // affiche une erreur
      dir_help(std::vector<std::string>({"add"}));             // affiche l'aide
    }
  }
}
