#include <iostream>

void square(const double& a,double& x);

auto main() -> int
{
  double x{0}, result{0};
  std::cout<<"please enter a number to be squared :"<<"\n";
  std::cin>>x;
  square(x,result);
  std::cout<<"The result is = "<<result<<"\n";
}

void square(const double& a,double& x){
  x= a*a;
}
