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

  std::cout<<"Get the iterator to the forth element in the list\n";
  std::list<double>::iterator loc{listDouble.begin()};
  std::advance(loc,3);
  std::cout<<"listDouble = ["<<3<<"] = "<<*loc<<"\n";
  std::cout<<"\n";

  std::cout<<"\n";
  std::cout<<"Reverse the list by using reverse() method\n";
  listDouble.reverse();
  print(listDouble,"listDouble");
  std::cout<<"\n";

  std::cout<<"\n";
  std::cout<<"Check the validity of the iterator after using reverse() method\n";
  std::cout<<"listDouble = ["<<3<<"] = "<<*loc<<"\n";
  std::cout<<"\n";

  return 0;
}
