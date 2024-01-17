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
  
  std::list<double> list1Double{50.0,60.0};
  std::cout<<"\n";
  print(list1Double,"list1Double");
  std::cout<<"\n";

  std::cout<<"\n";
  std::cout<<"Insert two elements at front using insert() function\n";
  list1Double.insert(list1Double.begin(),65.0);
  list1Double.insert(list1Double.begin(),75.0);
  print(list1Double,"list1Double");
  std::cout<<"\n";
  
  std::list<double> list2Double;
  std::cout<<"\n";
  print(list2Double,"list2Double");
  std::cout<<"\n";

  std::cout<<"\n";
  std::cout<<"Insert four elements at front using insert() function\n";
  list2Double.insert(list2Double.begin(),4,55.5);
  print(list2Double,"list2Double");
  std::cout<<"\n";

  std::cout<<"\n";
  std::cout<<"Insert the elements of list2Double to the end of list1Double using insert() function\n";
  list1Double.insert(list1Double.end(),list2Double.begin(),list2Double.end());
  print(list1Double,"list1Double");
  std::cout<<"\n";
  
  return 0;
}
