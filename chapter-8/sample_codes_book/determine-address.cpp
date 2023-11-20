#include <iostream>

auto main() -> int
{
  int var1{1};
  double var2{3.};
  std::cout<<"Address of the int variable : "<<var1<<"\n";
  std::cout<<"Address of the int variable : "<<&var1<<"\n";
  std::cout<<"Address of the double variable : "<<&var2<<"\n";
}
