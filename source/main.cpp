#include <mgsi.hpp>
#include <win_control.hpp>
#include <win_view.hpp>

data_model_t *g_data;

int main(int argc, char **argv)
{
  g_data = data_model::init(); 
  win_view::init(argc, argv);
  win_control::init();

  win_view::run();
  return 0;
}
