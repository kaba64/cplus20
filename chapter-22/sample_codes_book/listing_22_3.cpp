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
  
  std::vector<int> numVecInt{1,-33,33,45,66,77,89};

  std::cout<<"\nDisplay the content of the integer vector using Lambda function\n\n";
  print(numVecInt,"numVecInt");

  std::cout<<"Please enter the divisor : ";
  int divisor{0};
  std::cin>>divisor;
  std::cout<<"\nFind the first even number in the integer vector using Lambda function\n\n";
  auto evenNum = std::find_if(numVecInt.begin(),numVecInt.end(),
			      [divisor]<typename T>(const T &val){return ((val%divisor)==0);});
  if(evenNum!=numVecInt.end())
    std::cout<<"The first even number is: numVecInt["<<std::distance(numVecInt.begin(),evenNum)<<"] = "
	     <<*evenNum<<"\n\n";
  else
    std::cout<<"There was no even number in the container\n";
  return 0;
}
