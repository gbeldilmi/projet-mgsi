#pragma once

#include <iostream>
#include <string>
#include <vector>

#include <mgsi.hpp>
#include <node.hpp>

namespace win_control
{
  extern node *m_current;
  // list of directives
  void dir_help(std::vector<std::string> arguments);
  void dir_list(std::vector<std::string> arguments);
  void dir_node(std::vector<std::string> arguments);
  // other functions
  void exec_cmd(std::string, std::vector<std::string>);
  void extract_directive(std::string, std::string &, std::vector<std::string> &);
  void init();
  void run();
};

