#include <iostream>

int main(void){
  std::cout<<"Plese enter an integer number :";
  int number;
  std::cin>>number;
  int result1 = (number<< 1) + 5 << 1;
  int result2 = number<< 1 + 5 << 1;
  std::cout<<result1<<"\n";
  std::cout<<result2<<"\n";
}
