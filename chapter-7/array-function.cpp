#include <iostream>

void printv(int a, int n){
  for(int i=0;i<n;++i){
    std::cout<<"a["<<i<<"] = "<<a[i]<<"\n";
  }
}

auto main(int argc, char** argv) -> int
{
  int x[5] = {1,2,3,4,5};
  printv(x,5);
}
