#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template<typename T> void print(const T &d,const std::string &name){
  if(d.cbegin()==d.cend())
    std::cout<<"The container is empty\n";
  else{
    for(auto iter = d.begin();iter!=d.end();++iter){
      size_t index  = distance(d.begin(),iter);
      std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
    }
  }
}

template <typename T1,typename T2>
class Multiply{
public:
  auto operator ()(const T1& element1,const T2& element2)const{
    return (static_cast<decltype(element1*element2)>(element1*element2));
  }
};

int main(int argc,char* argv[]){

  std::vector<int> numIntVec{0,6,8,14,16,25};
  std::vector<double> numDoubleVec{1.6,6.7,9.5,12.6,18.5,28.5};
  std::cout<<"The elements of the integer vector container are:\n";
  print(numIntVec,"numIntVec");
  std::cout<<"\nThe elements of the double vector container are:\n";
  print(numDoubleVec,"numDoubleVec");

  if(numIntVec.size()!=numDoubleVec.size()){
    std::cerr<<"The size of the two vectors are not compatible\n";
    return (1);
  }
  try{
    std::vector<decltype(numIntVec.at(0)*numDoubleVec.at(0))> resultVec(numIntVec.size());
    std::transform(numIntVec.begin(),numIntVec.end(),numDoubleVec.begin(),
		   resultVec.begin(),Multiply<int,double>());
    std::cout<<"\nThe elements of the result vector container are:\n";
    print(resultVec,"resultVec");
  }catch(const std::exception& exp){
    std::cerr<<exp.what()<<"\n";
  }
  
  return 0;
}
