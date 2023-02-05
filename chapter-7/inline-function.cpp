#include <iostream>

inline double multiply(double x,double y)
{
  return x*y;
}

auto main() -> int
{
  double z = multiply(2.,4.);
  std::cout<<z<<"\n";
}
