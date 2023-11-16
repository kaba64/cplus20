#include <iostream>
#include <cmath>

constexpr double pi=acos(-1.);

double area(double r);
double area(double r, double h);

auto main(int argc, char** argv) -> int
{
  std::cout<<"Area of a circle : "<<area(1.)<<"\n";
  std::cout<<"Area of a cylinder : "<<area(1.,2.)<<"\n";
}

double area(double r){
  return pi*r*r;
}

double area(double r, double h)
{
  return area(r)*h;
}
