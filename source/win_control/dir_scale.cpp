#include <win_control.hpp>

void win_control::dir_scale(std::vector<std::string> arguments)
{
  if ((arguments.size() < 3) || (arguments.size() > 3)) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"scale"})); //affiche l'aide
  }
  else if (!typeid(arguments[0].toFloat()) || (!typeid(arguments[1].toFloat())) || (!typeid(arguments[2].toFloat()))) //si les arguments ne sont pas des nombres
  {
    std::cout << "Erreur : les arguments doivent être des entiers" << std::endl; //affiche une erreur
    dir_help(std::vector<std::string>({"scale"})); //affiche l'aide
  }
  else
  {
    float scaleX = arguments[0].toFloat();
    float scaleY = arguments[1].toFloat();
    float scaleZ = arguments[2].toFloat();

    float matrix[16] = {
      scaleX, 0.0f, 0.0f, 0.0f,
      0.0f, scaleY, 0.0f, 0.0f,
      0.0f, 0.0f, scaleZ, 0.0f,
      0.0f, 0.0f, 0.0f, 1.0f
    };

    m_current->set_matrix(m_current->get_matrix() * Matrix4x4(matrix)); //applique la redimension
  }
}

