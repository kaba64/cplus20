#include <iostream>

template<typename T>
T SPLIT(const T &x){return (x/5);}

int main(int argc,char *argv[]){

  std::cout<<"Please enter an integer number: ";
  int x{0};
  std::cin>>x;
  std::cout<<"x / 5 = "<<x<<"/5 = "<<SPLIT(x)<<"\n";
  return 0;
}
