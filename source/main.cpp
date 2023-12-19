#include <mgsi.hpp>
#include <win_control.hpp>
#include <win_view.hpp>

#include <thread>

data_model_t *g_data;

int main(int argc, char **argv)
{
  g_data = data_model::init(); 
  win_view::init(argc, argv);
  win_control::init();
  
  std::thread tv(win_view::run);
  std::thread tc(win_control::run);
  tc.join();
  win_view::exit();

  data_model::free(g_data);
  return 0;
}
