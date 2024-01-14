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

  std::vector<int> integers(5);
  std::cout<<"The vector of integers was initiated with the size : "<<integers.size()<<"\n";
  std::cout<<"The vector of integers has the capacity : "<<integers.capacity()<<"\n";
  print(integers,"integers");
  integers.push_back(555);

  std::cout<<"\nThe size of the vector after pushing an element : "<<integers.size()<<"\n";
  std::cout<<"The capacity of the vector after pushing an element : "<<integers.capacity()<<"\n";
  print(integers,"integers");
  
  integers.push_back(666);

  std::cout<<"\nThe size of the vector after pushing the second element : "<<integers.size()<<"\n";
  std::cout<<"The capacity of the vector after pushing the second element : "<<integers.capacity()<<"\n";
  print(integers,"integers");
  
  return 0;
}
