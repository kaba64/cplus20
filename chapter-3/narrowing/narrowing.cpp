#include <iostream>

auto main() -> int
{
  bool brace{false};
  if(brace){
    int a{22222222};
    short b{a};
    float c{a};
    double d{3333333333333333333.};
    std::cout<<"Initialized with int a = "<<a<<" using brace -> short int : b-a = "<<b-a<<" and float : c-a = "<<c-a<<std::endl;
    std::cout<<"Initialized double using brace : d = "<<d<<std::endl;
  }else{
    int a = 22222222;
    short b = a;
    float c = a;
    double d = 3333333333333333333.;
    std::cout<<"Initialized with int a = "<<a<<" without brace -> short int : b-a = "<<b-a<<" and float : c-a = "<<c-a<<std::endl;
    std::cout<<"Initialized double without brace : d = "<<d<<std::endl;
  }
}
