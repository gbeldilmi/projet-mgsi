#include <win_control.hpp>
#include <win_view.hpp>

int main(/*int argc, char const **argv*/)
{
  data_model *dm = data_model_init(); 
  win_control control(dm);
  win_view view(dm);
  return 0;
}
