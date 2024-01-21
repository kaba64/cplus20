#include <iostream>
#include <vector>
#include <algorithm>

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

template <typename numberType>
class IsMultiple{
public:
  numberType Devisor;
  IsMultiple(const numberType& devisorIn): Devisor(devisorIn){}
  bool operator ()(const numberType& element)const{
    return (element%Devisor)==0;
  }
};

int main(int argc,char* argv[]){

  std::vector<int> numIntVec{55,44,67,88,99,200,4477};
  std::cout<<"The elments of the vector container are:\n";
  print(numIntVec,"numIntVec");

  std::cout<<"\nEnter a devisor (>0) ";
  int devisor{0};
  std::cin>>devisor;

  std::cout<<"\nFind the first element that is a multiple of the devisor = "<<devisor<<"\n\n";
  std::vector<int>::iterator element = std::find_if(numIntVec.begin(),numIntVec.end(),IsMultiple<int>(devisor));
  //auto element ... (equivalent)
  
  if(element!=numIntVec.end()){
    std::cout<<"The first element divisible by "<<devisor<<" is "<<*element<<"\n";
  }
  return 0;
}
