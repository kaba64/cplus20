#include <iostream>
#include <vector>
#include <string>

template<typename T>
void print(const std::vector<T> &d,const std::string &name){

  for(auto iter = d.begin();iter!=d.end();++iter){
    size_t index  = distance(d.begin(),iter);
    std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
  }
}

int main(int argc,char *argv[]){

  const int size = 7;
  std::vector<int> integer;

  for(size_t i =0;i<size;++i)
    integer.push_back(2*i);

  std::cout<<"\nBefore removing elements from the vector\n\n";
  print(integer,"integer");

  size_t remove{2};
  // Remove two elements from end
  for(size_t i =0;i<remove;++i)
    integer.pop_back();

  std::cout<<"\nAfter removing "<<remove<<" elements from the vector\n\n";
  print(integer,"integer");
  
  return 0;
}
