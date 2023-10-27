#include <iostream>
#include <cstdint>

auto main() -> int
{
  std::cout<<"int = "<<sizeof(int)<<"\n";
  std::cout<<"unsigned int = "<<sizeof(unsigned int)<<"\n";
  std::cout<<"float = "<<sizeof(float)<<"\n";
  std::cout<<"double = "<<sizeof(double)<<"\n";
  std::cout<<"int 32-bit = "<<sizeof(int32_t)<<"\n";
  std::cout<<"int 64-bit = "<<sizeof(int64_t)<<"\n";
}
