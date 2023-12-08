// subscript operator overloading for the class MyBuffer
// the listng 12.10 of the book page 370
// Kazem Bzesefidpar December 7, 2023

#include <iostream>
#include <algorithm>

class MyBuffer{
private:
  int *myNums;
  unsigned int bufLength;
public:
  MyBuffer(unsigned int length)
    :bufLength(length){
    std::cout<<"Constructor of the class\n";
    myNums = new int[bufLength];
  }
  // assignment overloding
  MyBuffer& operator = (const MyBuffer& src){
    std::cout<<"Copy assignment creating deep copy\n";
    if(myNums!=src.myNums){//avoid copying iteslf
      if(myNums)
	delete myNums;
      bufLength = src.bufLength;
      myNums = new int[bufLength];
      std::copy(src.myNums,src.myNums+bufLength,myNums); // deep copy
    }
    return *this;
  }
  // copy constructor
  MyBuffer(const MyBuffer& copydata){
    std::cout<<"Deep copy"<<"\n";
    bufLength = copydata.bufLength;
    myNums = new int[bufLength];
    std::copy(copydata.myNums,copydata.myNums+bufLength,myNums);
  }
  // subscript overloadng
  int& operator [](const unsigned int index) const{
    return myNums[index];
  } 
  ~MyBuffer(){
    std::cout<<"Destructor of the class\n";
    delete[] myNums;
  }
  void SetValue(const unsigned int index, const int value){
    if(index<bufLength)
      *(myNums+index) = value;
  }
  void DisplayBuf()const{
    std::cout<<"The contents stored : ";
    for(unsigned int count=0;count<bufLength;++count)
      std::cout<<*(myNums+count)<<" ";
    std::cout<<"\n";
  }
};

void printContent(MyBuffer inputBuf){
  inputBuf.DisplayBuf();
}

int main(void){
  std::cout<<"How many integer would you like to store? ";
  unsigned int numsToStore = 0;
  std::cin>>numsToStore;
  MyBuffer buf(numsToStore);
  for(unsigned int i=0;i<numsToStore;++i){
    std::cout<<"Enter a value :";
    std::cin>>buf[i];
  }
  for(unsigned int i=0;i<numsToStore;++i)
    std::cout<<"Value["<<i<<"] = "<<buf[i]<<std::endl;
  return 0;
}
