#include <iostream>

auto main() -> int
{
  auto a{true};
  auto b{1};
  auto c{1.25};
  std::cout<<"type of a = "<<sizeof(a)<<"\n";
  std::cout<<"type of b = "<<sizeof(b)<<"\n";
  std::cout<<"type of c = "<<sizeof(c)<<"\n";
}
