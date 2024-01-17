#include <win_control.hpp>

void win_control::dir_rotate(std::vector<std::string> arguments)
{
    if((arguments.size() < 3)||(arguments.size() > 3)) //si le nombre d'arguments est incorrect
    {
        dir_help(std::vector<std::string>({"rotate"})); //affiche l'aide
    }
    else if((strtof(arguments[0]) == NULL) || (strtof(arguments[1]) == NULL) || (strtof(arguments[2]) == NULL)) //si les arguments ne sont pas des entiers
    {
        std::cout << "Erreur : les arguments doivent être des entiers" << std::endl; //affiche une erreur
        dir_help(std::vector<std::string>({"rotate"})); //affiche l'aide
    }
    else
    {
        float angleX = arguments[0].toFloat();
        float angleY = arguments[1].toFloat();
        float angleZ = arguments[2].toFloat();

        float rotationMatrix[16] = {
            cos(angleY) * cos(angleZ), -cos(angleX) * sin(angleZ) + sin(angleX) * sin(angleY) * cos(angleZ), sin(angleX) * sin(angleZ) + cos(angleX) * sin(angleY) * cos(angleZ), 0.0f,
            cos(angleY) * sin(angleZ), cos(angleX) * cos(angleZ) + sin(angleX) * sin(angleY) * sin(angleZ), -sin(angleX) * cos(angleZ) + cos(angleX) * sin(angleY) * sin(angleZ), 0.0f,
            -sin(angleY), sin(angleX) * cos(angleY), cos(angleX) * cos(angleY), 0.0f,
            0.0f, 0.0f, 0.0f, 1.0f
        };

        current_matrix = m_current->get_matrix();
        
        float resultMatrix[16];
        for (int i = 0; i < 4; i++) {
          for (int j = 0; j < 4; j++) {
            resultMatrix[i * 4 + j] = 0.0f;
            for (int k = 0; k < 4; k++) {
              resultMatrix[i * 4 + j] += current_matrix[i * 4 + k] * rotationMatrix[k * 4 + j];
            }
          }
        }
        m_current->set_matrix(resultMatrix);
    }
}
