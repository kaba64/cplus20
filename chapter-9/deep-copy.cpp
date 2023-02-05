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
  Store(const Store& copydata)
  {
    std::cout<<"Deep copy"<<"\n";
    numbers = copydata.numbers;
    ptri = new int[numbers];
    std::copy(copydata.ptri,copydata.ptri+numbers,ptri);
  }
  void print(){
    for(unsigned int i=0;i<numbers;++i){std::cout<<i<<"\n";}
  }
  void SetValue(int x, unsigned int index){ptri[index]=x;}
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

auto main() -> int
{
  Store Intnumbers{10};
  printdata(Intnumbers);
}

void printdata(Store data){
  data.print();
}
