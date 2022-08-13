#include <iostream>
#include <cmath>

void area(const double* const pin, const double* const rin, double* const ain)
{
  if(pin && rin && ain){
    *ain = (*pin)*(*rin)*(*rin);
  }else{
    std::cout<<"Invalid pointer passed in the function!"<<"\n";
  }
}

auto main() -> int
{
  double pi = acos(-1.);
  double radius = 1.;
  double a{0};
  area(&pi,&radius,&a);
  std::cout<<"Area : "<<a<<"\n";
}
