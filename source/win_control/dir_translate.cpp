#include <win_control.hpp>

void win_control::dir_translate(std::vector<std::string> arguments)
{
  if ((arguments.size() < 3)||(arguments.size() > 3)) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"translate"})); //affiche l'aide
  }
  else if(!typeid(arguments[0].toFloat()) || (!typeid(arguments[1].toFloat())) || (!typeid(arguments[2].toFloat()))) //si les arguments ne sont pas des nombres
  {
    std::cout << "Erreur : les arguments doivent être des entiers" << std::endl; //affiche une erreur
    dir_help(std::vector<std::string>({"translate"})); //affiche l'aide
  }
  else
  {
        float x = arguments[0].toFloat();
        float y = arguments[1].toFloat();
        float z = arguments[2].toFloat();
        glm::mat4 translationMatrix = {
            {1.0f, 0.0f, 0.0f, x},
            {0.0f, 1.0f, 0.0f, y},
            {0.0f, 0.0f, 1.0f, z},
            {0.0f, 0.0f, 0.0f, 1.0f}
        };
        m_current->set_matrix(m_current->get_matrix() * translationMatrix); //applique la translation
      }
    }
