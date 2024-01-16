#pragma once

#include <iostream>
#include <string>
#include <vector>

#include <mgsi.hpp>
#include <node.hpp>

namespace win_control
{
  extern node *m_current; // current node selected (used to navigate inside the tree)
  // list of directives
  void dir_help(std::vector<std::string> arguments);
  void dir_list(std::vector<std::string> arguments);
  void dir_node(std::vector<std::string> arguments);
  // execute command from a directive and its arguments
  void exec_cmd(std::string, std::vector<std::string>);
  // extract directive and its arguments from a string
  void extract_directive(std::string, std::string &, std::vector<std::string> &);
  // initialize and run
  void init();
  void run();
};

