#include <win_control.hpp>

void win_control::dir_cd(std::vector<std::string> arguments)
{
  if ((arguments.size() == 0) || (arguments.size() > 1))  //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"cd"})); //affiche l'aide
  }
  else
  {
    if(arguments[0] == "parent")//
    {
        if(m_current->get_parent() != nullptr)
        {
            m_current = m_current->get_parent();
        }
        else
        {
            std::cout << "Erreur : le noeud courant n'a pas de parent" << std::endl; //affiche une erreur
        }
    }
    else if(arguments[0] == "child")
    {
        if(m_current->get_children().size() != 0)
        {
            m_current = m_current->get_children()[0];
        }
        else
        {
            std::cout << "Erreur : le noeud courant n'a pas d'enfant" << std::endl; //affiche une erreur
        }
    }
    else if(arguments[0] == "next")
    {
        if(m_current->get_next() != nullptr)
        {
            m_current = m_current->get_next();
        }
        else
        {
            std::cout << "Erreur : le noeud courant n'a pas de noeud suivant" << std::endl; //affiche une erreur
        }
    }
    else if(arguments[0] == "previous")
    {
        if(m_current->get_previous() != nullptr)
        {
            m_current = m_current->get_previous();
        }
        else
        {
            std::cout << "Erreur : le noeud courant n'a pas de noeud précédent" << std::endl; //affiche une erreur
        }
    }
    else
    {
        std::cout << "Erreur : argument inconnu" << std::endl; //affiche une erreur
        dir_help(std::vector<std::string>({"cd"})); //affiche l'aide
    }
  }
}