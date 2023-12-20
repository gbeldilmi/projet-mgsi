#pragma once

#include <iostream>

#include <mgsi.hpp>

namespace win_control
{
  extern node *m_node_ptr;
  void exec_cmd(std::string cmd);
  void init();
  void run();
};
