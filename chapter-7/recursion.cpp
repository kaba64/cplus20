#include <iostream>
#include <string>

int fibonacci(int n)
{
  if(n<2){
    return n;
  }else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}

auto main(int argc, char** argv) -> int
{
  int n = std::stoi(argv[1]);
  std::cout<<fibonacci(n)<<"\n"; 
}
