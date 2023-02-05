#include <iostream>
#include <vector>

auto main() -> int
{
  std::vector<double> x = {1.,2.,3.,4.,5.,6.};
  for(auto y:x){
    std::cout<<y<<"\n";
  }
}
