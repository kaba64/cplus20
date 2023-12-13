#include <iostream>

template<typename T>
void swap(T &a, T &b){
  auto temp=a;
  a=b;
  b=temp;
}

int main(int argc,char *argv[]){

  std::cout<<"Please enter two floating number numbers seperated by space: ";
  double x{0.0},y{0.0};
  std::cin>>x>>y;
  std::cout<<"(x,y) = ("<<x<<","<<y<<")";
  swap(x,y);
  std::cout<<" is swaped to (x,y) = ("<<x<<","<<y<<")"<<"\n";
  return 0;
}
