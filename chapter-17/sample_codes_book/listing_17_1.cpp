#include <iostream>
#include <vector>
#include <string>

void print(const std::vector<int> &d,const std::string &name){
  size_t count{0};
  for(auto iter = d.begin();iter!=d.end();++iter){
    std::cout<<name<<" = ["<<count<<"] = "<<*iter<<"\n";
    ++count;
  }
}

int main(int argc,char *argv[]){

  std::vector<int> integer;
  print(integer,"integer");

  // vector initialized with list
  std::vector<int> integerList = {1,55,22,-6,55};
  print(integerList,"integerList");

  // vector with 10 elements
  std::vector<int> integer10(10); // the constructor of the class is initializing the elements to zero
  print(integer10,"integer10");

  // vector with 10 elements initialized with 20
  std::vector<int> integer10with20(10,20);
  print(integer10with20,"integer10with20");

  // vector initialized with a subset of another vector
  std::vector<int> partialCopy(integerList.begin(),integerList.begin()+3);
  print(partialCopy,"partialCopy");
  
  return 0;
}
