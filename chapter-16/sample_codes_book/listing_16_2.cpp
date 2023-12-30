#include <iostream>
#include <string>

int main(int argc,char **argv){

  std::string stlString("Hello string!");

  std::cout<<"Display elements in string using array-syntax:\n";
  for(size_t i=0;i<stlString.length();++i){
    std::cout<<"Character["<<i<<"] = "<<stlString[i]<<"\n";
  }

  int charOffset{0};
  std::cout<<"Display elements in string using iterators:\n";
  for(auto characterLoc = stlString.cbegin();characterLoc!=stlString.end();++characterLoc){
    /*This iterator can be increased and decreased, but it 
      cannot be used to modify the contents it points to 
      (Returns a const_iterator)*/
    //*characterLoc='a';
    std::cout<<"Character["<<charOffset++<<"] = "<<*characterLoc<<"\n";
  }

  std::cout<<"Display string using char* representation of data :\n";
  std::cout<<stlString.c_str()<<"\n";
  return 0;
}
