#include win_control.hpp

void win_control::exec_cmd(std::string input)
{
  string[] commande = new String[];

  //On décompose les mots de l'input
  vector<string> commande = getCmd(input, ' ');

  switch(commande[0])
  {
    case "cd":
    break;

    case "ls":
    break;

    case "remove":
    break;

    case "add"
    break;

    case "scale"
    break;

    case "translate":
    if((commande[1])
    {
      std::cout << "Syntaxe incorecte. Tapez help pour plus d'informations sur les commandes" << std::endl;
    }
    else
    {

    }
    break;

    case "rotate'":
    break;
    
    case "help":
    break;
    
    default:
    std::cout << "Commande inconnue. Tapez help pour une liste des commandes" << std::endl;
  }


  // TODO: Implement this function
  std::cout << "exec_cmd(" << input << ")" << std::endl;
}
