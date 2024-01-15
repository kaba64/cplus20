#include <iostream>
#include <deque>
#include <string>

template<typename T>
void print(const std::deque<T> &d,const std::string &name){

  for(auto iter = d.begin();iter!=d.end();++iter){
    size_t index  = distance(d.begin(),iter);
    std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
  }
}

int main(int argc,char *argv[]){
  using namespace std::literals;
  std::deque<std::string> stringData{"Hello"s,"Containers are cool!"s,"C++ is evolving!"s};
  print(stringData,"stringData");
  
  return 0;
}
