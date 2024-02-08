#include <iostream>
#include "Crap_class.h"

template <typename T> class smart_ptr{
private:
  T* rawPtr;
public:
  smart_ptr(T* rawPtrIn=nullptr): rawPtr(rawPtrIn){}
  //deep copy
  smart_ptr(const smart_ptr& deepCopyRawPtr){
    std::cout<<"Copy constructor creating deep copy\n";
    rawPtr = new T(*deepCopyRawPtr.rawPtr);
  }
  //Copy assignment
  smart_ptr& operator = (const smart_ptr& src){
    std::cout<<"Copy assignment\n";
    if(rawPtr!=src.rawPtr){ //avoid self copying
      if(rawPtr)
	delete rawPtr;
      // deep copy
      rawPtr = new T(*src.rawPtr);
    }
    return *this;
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
  inputFish->Swim();
  //(inputFish.get())->Swim(); // T has a swim() member function
}

int main(int argc,char *argv[]){
  smart_ptr<Carp> mylunch(new Carp);
  std::cout<<"\nTest deep copy constructor\n\n";
  MakeFishSwim(mylunch);
  std::cout<<"\nTest copy assignment\n\n";
  smart_ptr<Carp> myTommorowLunch; // my tommorow lunch is the same as tody!
  myTommorowLunch = mylunch;
  MakeFishSwim(myTommorowLunch);
  std::cout<<"\nOut of MakeFishSwim function\n\n";
  return 0;
}
