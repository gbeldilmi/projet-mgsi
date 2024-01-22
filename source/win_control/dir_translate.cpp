#include <win_control.hpp>

void win_control::dir_translate(std::vector<std::string> arguments)
{
  if ((arguments.size() < 3)||(arguments.size() > 3)) //si le nombre d'arguments est incorrect
  {
    dir_help(std::vector<std::string>({"translate"})); //affiche l'aide
  }
  else if((stof(arguments[0]) == NULL) || (stof(arguments[1]) == NULL) || (stof(arguments[2]) == NULL)) //si les arguments ne sont pas des entiers
  {  
    std::cout << "Erreur : les arguments doivent être des entiers" << std::endl; //affiche une erreur
    dir_help(std::vector<std::string>({"translate"})); //affiche l'aide
  }
  else
  {
    float translateMatrix[16];
    float x = std::stof(arguments[0]);
    float y = std::stof(arguments[1]);
    float z = std::stof(arguments[2]);
    
    // Création de la matrice de translation
    translateMatrix[0] = 1.0f; translateMatrix[4] = 0.0f; translateMatrix[8] = 0.0f; translateMatrix[12] = x;
    translateMatrix[1] = 0.0f; translateMatrix[5] = 1.0f; translateMatrix[9] = 0.0f; translateMatrix[13] = y;
    translateMatrix[2] = 0.0f; translateMatrix[6] = 0.0f; translateMatrix[10] = 1.0f; translateMatrix[14] = z;
    translateMatrix[3] = 0.0f; translateMatrix[7] = 0.0f; translateMatrix[11] = 0.0f; translateMatrix[15] = 1.0f;
    
    // Appliquer la translation
    float* currentMatrix = m_current->get_matrix();
    glGetFloatv(GL_MODELVIEW_MATRIX, currentMatrix);
    
    float resultMatrix[16];
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        resultMatrix[i * 4 + j] = 0.0f;
        for (int k = 0; k < 4; k++) {
          resultMatrix[i * 4 + j] += currentMatrix[i * 4 + k] * translateMatrix[k * 4 + j];
        }
      }
    }
    m_current->set_matrix(resultMatrix);
  }
}
