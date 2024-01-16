#include <win_control.hpp>

void win_control::dir_ls(std::vector<std::string> arguments)
{
  if (arguments.size() > 0) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"list"})); //affiche l'aide
  }
  else
  {
    std::cout << "Liste des noeuds :" << std::endl;

    std::cout << "Noeuds voisins :" << std::endl;
    std::cout << "\t" << "Précédent" << std::endl;
    if(m_current->get_previous() != nullptr) //si le noeud précédent existe
    {
      switch (m_current->get_previous()->get_type()) //affiche le type du noeud précédent
      {
      case NODE_GROUP:
        std::cout << "\t" << "Groupe" << std::endl;
        break;
      case NODE_CUBE:
        std::cout << "\t" << "Cube" << std::endl;
        break;
      case NODE_SPHERE:
        std::cout << "\t" << "Sphere" << std::endl;
        break;
      case NODE_CYLINDER:
        std::cout << "\t" << "Cylindre" << std::endl;
        break;
      case NODE_EMPTY:
        std::cout << "\t" << "Vide" << std::endl;
        break;
      default:
        break;
      }
    }
    else
    {
      std::cout << "\t" << "Aucun" << std::endl;
    }

    std::cout << "\t" << "Suivant" << std::endl;
    if(m_current->get_next() != nullptr) //si le noeud suivant existe
    {
      switch (m_current->get_next()->get_type()) //affiche le type du noeud suivant
      {
      case NODE_GROUP:
        std::cout << "\t" << "Groupe" << std::endl;
        break;
      case NODE_CUBE:
        std::cout << "\t" << "Cube" << std::endl;
        break;
      case NODE_SPHERE:
        std::cout << "\t" << "Sphere" << std::endl;
        break;
      case NODE_CYLINDER:
        std::cout << "\t" << "Cylindre" << std::endl;
        break;
      case NODE_EMPTY:
        std::cout << "\t" << "Vide" << std::endl;
        break;
      default:
        break;
      }
    }
    else
    {
      std::cout << "\t" << "Aucun" << std::endl;
    }
    
    std::cout << "Noeuds enfants :" << std::endl;
    if(m_current->get_child() != nullptr) //si le noeud enfant existe
    {
      node *child = m_current->get_child();
    }
    else
    {
      std::cout << "\t" << "Aucun" << std::endl;
    }
    bool fin = false;
    int i = 1;
    while (!fin)
    {
      std::cout << "\t" << "Enfant " << i << " : " << std::endl;
      switch(child->get_type()) //affiche le type du noeud enfant
      {
        case NODE_GROUP:
          std::cout << "\t" << i << " : " << "Groupe" << std::endl;
          break;
        case NODE_CUBE:
          std::cout << "\t" << i << " : " << "Cube" << std::endl;
          break;
        case NODE_SPHERE:
          std::cout << "\t" << i << " : " << "Sphere" << std::endl;
          break;
        case NODE_CYLINDER:
          std::cout << "\t" << i << " : " << "Cylindre" << std::endl;
          break;
        case NODE_EMPTY:
          std::cout << "\t" << i << " : " << "Vide" << std::endl;
          break;
        default:
          break;
      }
      if(child->get_next() != nullptr) //si le noeud suivant existe
      {
        child = child->get_next();
        i++;
      }
      else
      {
        fin = true;
      }
    }
    
  
  }

}
