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

  std::vector<int> numVecInt{1,-33,33,4,66,22,89,33};

  std::cout<<"\nDisplay the content of the integer vector\n\n";
  print(numVecInt,"numVecInt");

  std::cout<<"\nSort the integer vector in the descending order using lambda function\n\n";
  std::sort(numVecInt.begin(),numVecInt.end(),[]<typename T1,typename T2>(const T1 &elm1,const T2 &elm2){
      return static_cast<bool>(elm1<elm2);});
  
  print(numVecInt,"numVecInt");
  
  return 0;
}
