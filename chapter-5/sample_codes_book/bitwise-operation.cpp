#include <iostream>
#include <bitset>

auto main() -> int
{
  int var1{3};
  std::bitset<8> bitwise1 (var1);
  std::cout<<bitwise1<<"\n";
  int var2 = var1 <<3;
  std::cout<<var2<<"\n";
}
