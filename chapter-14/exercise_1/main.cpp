#include <iostream>

#define MultiTwoNum(a,b) ((a) * (b))

int main(int argc,char *argv[]){

  std::cout<<"Plese enter to integer number seperated by space :";
  int a,b;
  std::cin>>a>>b;
  std::cout<<"a * b = "<<MultiTwoNum(a,b)<<"\n";
  return 0;
}
