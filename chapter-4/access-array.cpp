#include <iostream>

constexpr int size{5}, size1{2}, size2{3};

auto main() -> int
{
  // one dimensional array

  /*int array_int_one[size] = {1,2,4,8,16};
  for (int i =0;i<size;++i){
    std::cout<<"array_int_one["<<i<<"] = "<<array_int_one[i]<<"\n";
    }*/
  
  // Multi-dimensional array

  int array_int_one[size1][size2] = {{1,2,4},{8,16,32}};
  for(int i =0;i<size1;++i){
    for(int j=0;j<size2;++j){
      std::cout<<"array_int_one["<<i<<"]"<<"["<<j<<"] = "<<array_int_one[i][j]<<"\n";
    }
  }
}
