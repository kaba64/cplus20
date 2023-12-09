/* The exercise 2 of chapter 12
 A class with move constructr and overloaded assisgnemen operator
 for a class with float* 
 Kazem Bazesefidpar December 9, 2023*/

#include <iostream>
#include <vector>

class DynamicFloats{
private:
  float *myBuf;
  int lengthBuf;
public:
  DynamicFloats(int length)
    : lengthBuf(length), myBuf(new float[length]){std::cout<<"Constructor of the class for "<<lengthBuf<<"\n";}
  // Move Constructor
  DynamicFloats(DynamicFloats && src){
    std::cout<<"Move Constructor of the class for "<<src.lengthBuf<<"\n";
    if(src.myBuf!=NULL){
      lengthBuf = src.lengthBuf;
      myBuf = src.myBuf;
      src.myBuf = nullptr;
      src.lengthBuf = 0;
    }
  }
  ~DynamicFloats(){
    std::cout<<"Destructor of the class for "<<lengthBuf<<"\n";
    delete [] myBuf;
  }
};

int main(void){

  DynamicFloats buf(2);
  std::vector<DynamicFloats> v;
  v.push_back(DynamicFloats(25));
  v.push_back(DynamicFloats(75));
  
  return 0;
}
