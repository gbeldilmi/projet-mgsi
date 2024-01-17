#include <win_control.hpp>

void win_control::dir_rotate(std::vector<std::string> arguments)
{
    if((arguments.size() < 3)||(arguments.size() > 3)) //si le nombre d'arguments est incorrect
    {
        dir_help(std::vector<std::string>({"rotate"})); //affiche l'aide
    }
    else if(!typeId(arguments[0].toFloat()) || (!typeId(arguments[1].toFloat())) || (!typeId(arguments[2].toFloat()))) //si les arguments ne sont pas des nombres
    {
        std::cout << "Erreur : les arguments doivent être des entiers" << std::endl; //affiche une erreur
        dir_help(std::vector<std::string>({"rotate"})); //affiche l'aide
    }
    else
    {
        float angleX = arguments[0].toFloat();
        float angleY = arguments[1].toFloat();
        float angleZ = arguments[2].toFloat();

        float cX = cos(angleX);
        float sX = sin(angleX);
        float cY = cos(angleY);
        float sY = sin(angleY);
        float cZ = cos(angleZ);
        float sZ = sin(angleZ);

        Matrix4x4 rotationMatrix;
        rotationMatrix[0][0] = cY * cZ;
        rotationMatrix[0][1] = -cY * sZ;
        rotationMatrix[0][2] = sY;
        rotationMatrix[0][3] = 0.0f;
        rotationMatrix[1][0] = sX * sY * cZ + cX * sZ;
        rotationMatrix[1][1] = -sX * sY * sZ + cX * cZ;
        rotationMatrix[1][2] = -sX * cY;
        rotationMatrix[1][3] = 0.0f;
        rotationMatrix[2][0] = -cX * sY * cZ + sX * sZ;
        rotationMatrix[2][1] = cX * sY * sZ + sX * cZ;
        rotationMatrix[2][2] = cX * cY;
        rotationMatrix[2][3] = 0.0f;
        rotationMatrix[3][0] = 0.0f;
        rotationMatrix[3][1] = 0.0f;
        rotationMatrix[3][2] = 0.0f;
        rotationMatrix[3][3] = 1.0f;

        m_current->set_matrix(m_current->get_matrix() * rotationMatrix); //applique la rotation
}
