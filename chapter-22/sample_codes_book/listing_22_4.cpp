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

inline auto lambda = []<typename T1,typename T2>(const T1 &val1,const T2 &val2){return val1*val2;}; 

int main(int argc,char *argv[]){
  
  std::vector<int> numVecInt1{1,-33,33,45,66,77,89};
  std::vector<int> numVecInt2{2,55,6,88,9,-22,-11};
  std::vector<int> resVecInt(numVecInt1.size());
  std::cout<<"\nDisplay the content of the integer vectors\n\n";
  print(numVecInt1,"numVecInt1");
  std::cout<<"\n";
  print(numVecInt2,"numVecInt2");
  std::cout<<"\n";
  print(resVecInt,"resVecInt");
  std::cout<<"\n";
  
  std::cout<<"\nMuliply each elements of the two integer vectors using Lambda function\n\n";
  std::transform(numVecInt1.begin(),numVecInt1.end(),numVecInt2.begin(),resVecInt.begin(),lambda);
  print(resVecInt,"resVecInt");
  std::cout<<"\n";
  return 0;
}
