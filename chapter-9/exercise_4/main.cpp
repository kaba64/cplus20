#include <iostream>
#include <cmath>

class Circle{
  double radius;
  const double Pi = acos(-1.0);
public:
  Circle(double radius_in)
    :radius(radius_in){}
  ~Circle(){}
  void Compute_area()const{std::cout<<"The are of the circle is : "<<Pi*radius*radius<<"\n";}
  void Compute_Circumference()const{std::cout<<"The circumference of the circle is : "<<2.0*Pi*radius<<"\n";}
};

int main(void){

  Circle circleSample(1.0);
  circleSample.Compute_area();
  circleSample.Compute_Circumference();
  return 0;
}
