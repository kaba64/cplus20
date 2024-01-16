#include <iostream>
#include <list>
#include <vector>

template<typename T>
void print(const std::list<T> &d,const std::string &name){

  for(auto iter = d.begin();iter!=d.end();++iter){
    size_t index  = distance(d.begin(),iter);
    std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
  }
}

int main(int argc,char *argv[]){

  std::list<int> listIntEmpty;
  std::cout<<"\n";
  print(listIntEmpty,"listIntEmpty");
  std::cout<<"\n";
  std::list<int> listIntWith10(10);
  std::cout<<"\n";
  print(listIntWith10,"listIntWith10");
  std::cout<<"\n";
  std::list<int> listIntWith5Value99(5,99);
  std::cout<<"\n";
  print(listIntWith5Value99,"listIntWith5Value99");
  std::cout<<"\n";
  std::list<int> copylistIntWith5Value99(listIntWith5Value99);
  std::cout<<"\n";
  print(copylistIntWith5Value99,"copylistIntWith5Value99");
  std::cout<<"\n";
  std::vector<int> vectorInt10Value2024(10,2024);
  
  std::list<int> copylistFromVectorWith5Value2024(vectorInt10Value2024.begin(),vectorInt10Value2024.begin()+5);
  std::cout<<"\n";
  print(copylistFromVectorWith5Value2024,"copylistFromVectorWith5Value2024");
  std::cout<<"\n";
  return 0;
}
