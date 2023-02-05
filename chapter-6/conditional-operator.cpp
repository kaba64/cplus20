#include <iostream>

auto main() -> int
{
  int a,b;
  std::cout<<"PLease enter two number for finding their max : ";
  std::cin>>a>>b;
  int max_val = (a<=b) ? b:a;
  std::cout<<"The maximum value is "<<max_val<<"\n";
}
