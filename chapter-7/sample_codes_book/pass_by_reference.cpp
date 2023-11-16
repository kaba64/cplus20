#include <iostream>
#include <cmath>

constexpr double pi=acos(-1.);

void area(double r,double &result);

auto main(int argc, char** argv) -> int
{
  double area_c = 0.0;
  area(1.,area_c);
  std::cout<<"Area of a circle : "<<area_c<<"\n";
}

void area(double r,double &result){
  result =  pi*r*r;
}
