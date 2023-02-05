#include <iostream>

constexpr int number =2;

auto main() -> int
{
  
  std::string* names = new std::string[number];
  double* ages = new double[number];

  std::cout<<"Please enter the name and age for 4 person : \n";
  for(int i=0;i<number;++i){
    std::cin>>names[i]>>ages[i];
  }
  for(int i=0;i<number;++i){
    std::cout<<"name = "<<names[i]<<"; age = "<<ages[i]<<"\n";
  }
  delete[] names;
  delete[] ages;
}
