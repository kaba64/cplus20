#include <iostream>
#include <algorithm>

class Store{
public:
  explicit Store(unsigned int n)
    :numbers(n)
  {
    ptri = new int[n];
    for(unsigned int i=0;i<n;++i){
      ptri[i]=i;
    }
    std::cout<<"In constructor"<<"\n";
  }
  Store(const Store& copydata) // deep copy member function
  {
    std::cout<<"Deep copy"<<"\n";
    numbers = copydata.numbers;
    ptri = new int[numbers];
    std::copy(copydata.ptri,copydata.ptri+numbers,ptri);
  }
  Store(Store&& movesourse){
    if(movesourse.getpointer() !=NULL){
      ptri = movesourse.getpointer();
      movesourse.SetPointer(NULL);
    }
  }
  void print(){
    for(unsigned int i=0;i<numbers;++i){std::cout<<i<<"\n";}
  }
  void SetValue(int x, unsigned int index){ptri[index]=x;}
  void SetPointer(int* ptriin){ptriin=NULL;}
  unsigned int getnumber() const{return numbers;}
  int* getpointer() const{return ptri;}
  ~Store()
  {
    delete[] ptri;
    std::cout<<"In destructor"<<"\n";
  }
private:
  int* ptri;
  unsigned int numbers;
};

void printdata(Store data);
Store Copy(Store& source);
auto main() -> int
{
  Store Intnumbers{10};
  Store Intnumbers2(Copy(Intnumbers));
}

void printdata(Store data){
  data.print();
}

Store Copy(Store& source){
  std::cout<<"In copy function"<<"\n";
  Store copyforreturn(source.getnumber());
  return copyforreturn;
}
