// Copy assisgnment for the class MyBuffer
// the listng 12.9 of the book page 367

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
  MyBuffer(const MyBuffer& copydata){
    std::cout<<"Deep copy"<<"\n";
    bufLength = copydata.bufLength;
    myNums = new int[bufLength];
    std::copy(copydata.myNums,copydata.myNums+bufLength,myNums);
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
    int valueEntered = 0;
    std::cin>>valueEntered;
    buf.SetValue(i,valueEntered);
  }
  MyBuffer anotherBuf(1); // initialized to have one int
  anotherBuf = buf;
  printContent(anotherBuf);
  //anotherBuf.DisplayBuf();
  return 0;
}
