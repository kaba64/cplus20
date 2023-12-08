// move constructor and assignment operator overloading for the
//class MyBuffer the listng 12.12 of the book page 370
// Kazem Bzesefidpar December 8, 2023

#include <iostream>
#include <algorithm>

class MyBuffer{
private:
  int *myNums;
  unsigned int bufLength;
public:
  // Constructor
  MyBuffer(unsigned int length)
    :bufLength(length){
    std::cout<<"Constructor of the class "<<bufLength<<"\n";
    myNums = new int[bufLength];
  }
  // copy constructor
  MyBuffer(const MyBuffer& copydata){
    std::cout<<"Deep copy constructor "<<copydata.bufLength<<"\n";
    bufLength = copydata.bufLength;
    myNums = new int[bufLength];
    std::copy(copydata.myNums,copydata.myNums+bufLength,myNums);
  }
  // move constructor
  MyBuffer(MyBuffer&& src){
    std::cout<<"Move constructor "<<src.bufLength<<"\n";
    if(src.myNums!=NULL){
      bufLength = src.bufLength;
      myNums = src.myNums; // take the owner ship
      src.myNums = NULL;
      src.bufLength = 0;
    }
  }
  // Copy assignment overloding
  MyBuffer& operator = (const MyBuffer& src){
    std::cout<<"Copy assignment creating deep copy "<<src.bufLength<<"\n";
    if(myNums!=src.myNums){//avoid copying iteslf
      if(myNums)
	delete myNums;
      bufLength = src.bufLength;
      myNums = new int[bufLength];
      std::copy(src.myNums,src.myNums+bufLength,myNums); // deep copy
    }
    return *this;
  }
  // Move assignment overlodinlg
  MyBuffer& operator = (MyBuffer&& src){
    std::cout<<"Move assignment "<<bufLength<<"\n";
    if((src.myNums!=NULL) && (myNums != src.myNums) ){
      delete [] myNums;
      myNums = src.myNums; // take the owner ship
      bufLength = src.bufLength;
      src.myNums = NULL;
      src.bufLength = 0;
    }
    return *this;
  }
  // overloading concatenting operator
  MyBuffer operator + (const MyBuffer& bufToAppend){
    std::cout<<"Overloading + concatenting operator "<<bufLength<<"\n";
    MyBuffer newBuf(this->bufLength+bufToAppend.bufLength);
    for(unsigned int i=0;i<bufLength;++i)
      newBuf.SetValue(i,*(myNums+i));
    for(unsigned int i=0;i<bufToAppend.bufLength;++i)
      newBuf.SetValue(i+bufLength,*(bufToAppend.myNums+i));
    return newBuf;
  }
  // subscript overloadng
  int& operator [](const unsigned int index) const{
    return myNums[index];
  } 
  ~MyBuffer(){
    std::cout<<"Destructor of the class "<<bufLength<<"\n";
    delete[] myNums;
  }
  void SetValue(const unsigned int index, const int value){
    if(index<bufLength)
      *(myNums+index) = value;
  }
  void DisplayBuf()const{
    std::cout<<"The contents stored : ";
    for(unsigned int count=0;count<bufLength;++count)
      std::cout<<"buf["<<count<<"] = "<<*(myNums+count)<<" ";
    std::cout<<"\n";
  }
};

void printContent(MyBuffer inputBuf){
  inputBuf.DisplayBuf();
}

int main(void){
  MyBuffer buf1(5);
  MyBuffer buf2(15);
  std::cout<<"Concatenation at object instantiation: \n";
  MyBuffer buf3(buf1+buf2);
  MyBuffer bufsum(1);
  std::cout<<"Concatenation at assignment: \n";
  MyBuffer buf4 = buf1 + buf2 + buf3;
  printContent(buf2);
  return 0;
}
