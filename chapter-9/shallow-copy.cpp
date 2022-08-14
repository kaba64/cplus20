#include <iostream>

class Store{
public:
  Store(int n)
    :numbers(n)
  {
    ptri = new int[n];
    for(int i=0;i<n;++i){
      ptri[i]=i;
    }
    std::cout<<"In constructor"<<"\n";
  }
  void print(){
    for(int i=0;i<numbers;++i){std::cout<<i<<"\n";}
  }
  ~Store()
  {
    delete[] ptri;
    std::cout<<"In destructor"<<"\n";
  }
private:
  int* ptri;
  int numbers;
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
