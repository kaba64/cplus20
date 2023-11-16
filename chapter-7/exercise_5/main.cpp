#include <iostream>
#include <cmath>

const double pi = acos(-1.);

/*The area of the circle*/
void area_circle(double r,double &result){
  result = pi*r*r;
}

/*The circumference of the circle*/
void circumference_circle(double r,double &result){
  result = 2*pi*r;
}


auto main(void) -> int
{
  double a_cir, s_cir;
  area_circle(1.0,a_cir);
  circumference_circle(1.0,s_cir);
  std::cout<<"The circumference of a circel with the radius of 1 is : "<<s_cir<<std::endl;
  std::cout<<"The area of a circel with the radius of 1 is : "<<a_cir<<std::endl;
}
