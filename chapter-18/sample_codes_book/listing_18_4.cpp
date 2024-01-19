#include <iostream>
#include <list>

template<typename T>
void print(const T &d,const std::string &name){

  if(d.cbegin()==d.cend())
    std::cout<<"The container is empty\n";
  else{
    for(auto iter = d.begin();iter!=d.end();++iter){
      size_t index  = distance(d.begin(),iter);
      std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
    }
  }
}

int main(int argc,char *argv[]){
  
  std::list<double> listDouble{50.0,60.0,44.5,-55.6,-110,112.5};
  std::cout<<"\n";
  print(listDouble,"listDouble");
  std::cout<<"\n";

  std::cout<<"erase the forth element form the list\n";
  std::list<double>::iterator loc{listDouble.begin()};
  std::advance(loc,3);
  listDouble.erase(loc);
  print(listDouble,"listDouble");
  std::cout<<"\n";

  loc = listDouble.begin();
  std::advance(loc,3);
  std::cout<<"erase the elements form the front of list until the forth element\n";
  listDouble.erase(listDouble.begin(),loc);
  print(listDouble,"listDouble");
  std::cout<<"\n";
  
  return 0;
}
