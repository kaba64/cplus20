#include <iostream>

int main(void){
  int *pointToAnInt = new int;
  int *pNumberCopy = pointToAnInt;
  *pNumberCopy = 30;
  std::cout<<"The value of *pNumberCopy is : "<<*pNumberCopy<<std::endl;
  delete pointToAnInt;
  return 0;
}
