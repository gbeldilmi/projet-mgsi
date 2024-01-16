#pragma once

#include <iostream>
#include <string>
#include <vector>

#include <mgsi.hpp>

namespace win_control
{
  extern node *m_current; // current node selected (used to navigate inside the tree)
  // list of directives
  void dir_add(std::vector<std::string>);
  void dir_cd(std::vector<std::string>);
  void dir_help(std::vector<std::string>);
  void dir_ls(std::vector<std::string>);
  void dir_remove(std::vector<std::string>);
  void dir_rotate(std::vector<std::string>);
  void dir_scale(std::vector<std::string>);
  void dir_texture(std::vector<std::string>);
  void dir_translate(std::vector<std::string>);
  // execute command from a directive and its arguments
  void exec_cmd(std::string, std::vector<std::string>);
  // extract directive and its arguments from a string
  void extract_directive(std::string, std::string &, std::vector<std::string> &);
  // initialize and run
  void init();
  void run();
};


