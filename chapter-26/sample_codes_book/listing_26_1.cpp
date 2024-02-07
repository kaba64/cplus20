#include <iostream>
#include "Crap_class.h"

template <typename T> class smart_ptr{
private:
  T* rawPtr;
public:
  smart_ptr(T* rawPtrIn): rawPtr(rawPtrIn){}
  //deep copy
  smart_ptr(const smart_ptr& deepCopyRawPtr){
    std::cout<<"Copy constructor creating deep copy\n";
    rawPtr = new T(*deepCopyRawPtr.rawPtr);
  }
  T* get() const {
    return rawPtr;
  }
  ~smart_ptr(){
    std::cout<<"Destructr\n";
    delete rawPtr;
  }
  T& operator * ()const{return *(rawPtr);}
  // Allow accessing the raw pointer directly
  T* operator -> ()const{return rawPtr;}
};

template <typename T> void MakeFishSwim(smart_ptr<T> inputFish){

  /*When a (smart_ptr<T>* inputFish) is passed to the function use the commented one */
  //T* fishPtr = inputFish->operator->();

  (inputFish.get())->Swim(); // T has a swim() member function
}

int main(int argc,char *argv[]){
  smart_ptr<Carp> mylunch(new Carp);
  MakeFishSwim(mylunch);
  return 0;
}
