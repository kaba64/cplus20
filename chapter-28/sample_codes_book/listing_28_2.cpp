#include <iostream>
#include <exception>

int main(int argc,char *argv[]){

  std::cout<<"Enter the number of integer for allocating memory\n";

  try{
    int input{0};
    std::cin>>input;
    int* Bufer = new int[input];
    delete[] Bufer;
  }catch(const std::bad_alloc& exp){
    std::cerr<<"Exception occured : "<<exp.what()<<"\n";
  }catch(...){
    std::cout<<"Exception occured! Type unknown\n";
  }
}
