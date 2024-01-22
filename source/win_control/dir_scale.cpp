#include <win_control.hpp>

void win_control::dir_scale(std::vector<std::string> arguments)
{
  if ((arguments.size() < 3) || (arguments.size() > 3)) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"scale"})); //affiche l'aide
  }
  else if((stof(arguments[0]) == NULL) || (stof(arguments[1]) == NULL) || (stof(arguments[2]) == NULL)) //si les arguments ne sont pas des entiers
  {
    std::cout << "Erreur : les arguments doivent être des entiers" << std::endl; //affiche une erreur
    dir_help(std::vector<std::string>({"scale"})); //affiche l'aide
  }
  else
  {
    GLfloat scaleMatrix[16] = { // Création de la matrice de translation
      stof(arguments[0]), 0.0f, 0.0f, 0.0f,
      0.0f, stof(arguments[1]), 0.0f, 0.0f,
      0.0f, 0.0f, stof(arguments[2]), 0.0f,
      0.0f, 0.0f, 0.0f, 1.0f
    };

    float* currentMatrix = m_current->get_matrix();
    glGetFloatv(GL_MODELVIEW_MATRIX, currentMatrix);

    GLfloat resultMatrix[16];
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        resultMatrix[i * 4 + j] = 0.0f;
        for (int k = 0; k < 4; k++) {
          resultMatrix[i * 4 + j] += currentMatrix[i * 4 + k] * scaleMatrix[k * 4 + j];
        }
      }
    }
    m_current->set_matrix(resultMatrix);
  }
}
