#include <iostream>
#include <algorithm>
#include <vector>

template<typename T> void print(const T &d,const std::string &name){
  if(d.cbegin()==d.cend())
    std::cout<<"The container is empty\n";
  else{
    for(auto iter = d.begin();iter!=d.end();++iter){
      size_t index  = std::distance(d.begin(),iter);
      std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
    }
  }
}

int main(int argc,char *argv[]){

  std::vector<int> numVecInt{1,2,3,4,5,6,7,8};

  std::cout<<"\nDisplay the content of the integer vector\n\n";
  print(numVecInt,"numVecInt");

  std::cout<<"Please enter an integer value to add it to the elements of the vector :";
  int addElement{1};
  std::cin>>addElement;
  
  std::cout<<"\nAdding a value to all elements of integer vector using lambda function\n\n";
  std::for_each(numVecInt.begin(),numVecInt.end(),[addElement]<typename T>(T &elm){elm+=addElement;});
  
  print(numVecInt,"numVecInt");
  
  return 0;
}
