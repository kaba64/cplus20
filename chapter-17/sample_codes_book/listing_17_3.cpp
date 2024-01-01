#include <iostream>
#include <vector>
#include <string>

void displayVector(const std::vector<int>& inVec,const std::string name){
  size_t count{0};
  // auto is used instead of std::vector<int>::const_iterator!
  for(auto element = inVec.begin();element!=inVec.end();++element){
    std::cout<<name<<" = ["<<count<<"] = "<<*element<<"\n";
    ++count;
  }
}

int main(int argc,char *argv[]){
  std::cout<<"\nInserting elements in the middel or beginning of a vector is not computationally efficient!\n\n";
  std::vector<int> integers(4,90);
  displayVector(integers,"integers");

  std::cout<<"Insert a number in the beginning and two numbers at the end of the vector\n";
  integers.insert(integers.begin(),40);
  integers.insert(integers.end(),2,50);
  displayVector(integers,"integers");

  int insertPosition{1};
  std::cout<<"Insert the elements of another vector in integers vector in position "<<insertPosition<<"\n";
  std::vector<int> another(3,3);
  integers.insert(integers.begin()+insertPosition,another.begin(),another.end());
  displayVector(integers,"integers");
}
