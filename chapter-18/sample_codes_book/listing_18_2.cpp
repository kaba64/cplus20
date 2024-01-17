#include <iostream>
#include <list>

template<typename T>
void print(const T &d,const std::string &name){

  for(auto iter = d.begin();iter!=d.end();++iter){
    size_t index  = distance(d.begin(),iter);
    std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
  }
}

int main(int argc,char *argv[]){
  
  std::list<double> listDouble{1.2,90.99};
  std::cout<<"\n";
  print(listDouble,"listDouble");
  std::cout<<"\n";

  std::cout<<"\n";
  std::cout<<"Insert two element at the front\n";
  listDouble.push_front(1.0);
  listDouble.push_front(0.8);
  print(listDouble,"listDouble");
  std::cout<<"\n";

  std::cout<<"\n";
  std::cout<<"Insert two element at the back\n";
  listDouble.push_back(100.0);
  listDouble.push_back(105.0);
  print(listDouble,"listDouble");
  std::cout<<"\n";
  
  return 0;
}
