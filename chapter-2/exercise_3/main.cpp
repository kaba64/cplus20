#include <iostream>

int DemoConsoleOutput(void);

int main(int argc, char* argv[])
{
  return DemoConsoleOutput();
}

int DemoConsoleOutput(void){
  std::cout<<"Please enter two real numbers"<<std::endl;
  double num1, num2;
  std::cin>>num1>>num2;
  std::cout<<num1<<"-"<<num2<<" = "<<num1-num2<<std::endl;
  std::cout<<num1<<"*"<<num2<<" = "<<num1*num2<<std::endl;
  return 0;
}
