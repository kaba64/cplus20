#include <iostream>

auto main() -> int
{
  try{
    for(int i = 0;i<1000000;++i)
      int* gfg_array = new int[100000000];
    //delete [] gfg_array;
  }
  catch(std::bad_alloc& e){
    std::cout<<"Memmory allocation faild!"<<"\n";
  }
}
