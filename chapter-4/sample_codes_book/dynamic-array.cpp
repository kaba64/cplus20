#include <iostream>
#include <vector>

constexpr int size{5};

auto main() -> int
{
  //int a[size] = {};
  std::vector<int> a(size);
  for(unsigned int i=0;i<a.size();++i){
    a[i] = 2*i;
  }
  for(unsigned int i=0;i<a.size();++i){
    std::cout<<"a["<<i<<"] = "<<a[i]<<"\n";
  }
  a.push_back(2*size);
  std::cout<<"a["<<a.size()-1<<"] = "<<a[a.size()-1]<<"\n";
}
