#include <iostream>
#include <cmath>

const double pi = acos(-1.);

/*The volume of the cylinder*/
double volume(double r,double h){
  return (pi*r*r*h);
}

/*The volume of the sphere*/
double volume(double r){
  return (4*pi*r*r*r)/3;
}


auto main(void) -> int
{
  std::cout<<"The volume of the sphere with radius of 1 is : "<<volume(1.)<<std::endl;
  std::cout<<"The volume of the cylinder with radius and hight of 1 is : "<<volume(1.,1.)<<std::endl;
}
