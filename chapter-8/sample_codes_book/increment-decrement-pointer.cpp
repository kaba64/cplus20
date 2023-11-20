#include <iostream>

auto main() -> int
{
  int numbers;
  std::cout<<"Please enter the number of elements needed : \n";
  std::cin>>numbers;
  int* arraynum = new int[numbers];
  std::cout<<"Please enter them : \n";
  for(int i=0;i<numbers;++i){
    std::cin>>arraynum[i];
  }
  for(int i=0;i<numbers;++i){
    std::cout<<*arraynum<<"\n";
    ++arraynum;
  }
  arraynum-=numbers;
  delete[] arraynum;
}
