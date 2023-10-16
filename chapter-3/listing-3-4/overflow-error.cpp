#include <iostream>
#include <math.h>
/*Similar code to lisiting 3-4 of book
  October 16, 2023
  Kazem Bazesefidpar*/
auto main() -> int
{
  unsigned short a = (unsigned short)pow(2,8*(double)sizeof(unsigned short));
  std::cout<<"Not overflow for unsigned short : "<<a<<"\n";
  ++a;
  std::cout<<"Overflow for unsigned short after adding 1 : "<<a<<"\n";
  short b = (short)(pow(2,8*(double)sizeof(unsigned short))/2);
  std::cout<<"Not overflow for short : "<<b<<"\n";
  ++b;
  std::cout<<"Overflow for short after adding 1 : "<<b<<"\n";
}
