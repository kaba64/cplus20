#include <iostream>

int main(int argc,char *argv[]){

  std::cout<<"Enter the number of integer for allocating memory\n";

  try{
    int input{0};
    std::cin>>input;
    int* Bufer = new int[input];
    delete[] Bufer;
  }catch(...){
    std::cout<<"Exception occured!\n";
  }
}
