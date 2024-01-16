#include <win_control.hpp>

void win_control::extract_directive(std::string input, std::string &directive, std::vector<std::string> &arguments)
{
  std::vector<std::string> words = std::vector<std::string>();
  size_t i;
  arguments = std::vector<std::string>();
  // split input into words (separated by spaces)
  for (i = 0; i < input.length(); i++)
  {
    if (input[i] == ' ')
    {
      words.push_back(input.substr(0, i));
      input = input.substr(i + 1, input.length() - i);
      i = 0;
    }
  }
  words.push_back(input);
  // extract directive
  directive = words[0];
  // extract arguments
  for (i = 1; i < words.size(); i++)
  {
    arguments.push_back(words[i]);
  }
}
