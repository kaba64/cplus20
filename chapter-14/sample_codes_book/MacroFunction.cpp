#include <iostream>
#include <string>

#define SQUARE(x) ((x) * (x))
#define PI 3.1416
#define AREA_CIRCLE(r) (PI*(r)*(r))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) > (b) ? (b) : (a))

auto readNumber(std::string name){
  std::cout<<"Enter "<<name<<" : ";
  auto num{0};
  std::cin>>num;
  return num;
}

int main(int argc, char *argv[]){
  
  int num1 = readNumber("an integer");

  std::cout<<"SQUARE("<<num1<<") = "<<SQUARE(num1)<<"\n";
  std::cout<<"The area of a circel with radus "<<num1<<" is: "<<AREA_CIRCLE(num1)<<"\n";

  int num2 = readNumber("another integer"); 

  std::cout<<"MAX("<<num1<<","<<num2<<") = "<<MAX(num1,num2)<<"\n";
  std::cout<<"MIN("<<num1<<","<<num2<<") = "<<MIN(num1,num2)<<"\n";

  return 0;
}
