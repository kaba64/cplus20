#include <iostream>

double Divide(const double dividend,const double divisor){
  if(divisor==0.0)
    throw "Division by zero occured!";
  std::cout<<"The line after throw keyword\n";
  return dividend/divisor;
}

int main(int argc,char *argv[]){

  std::cout<<"Enter dividend\n";
  double dividend{0.0};
  std::cin>>dividend;
  std::cout<<"Enter divisor\n";
  double divisor{0.0};
  std::cin>>divisor;
  
  try{
    double result = Divide(dividend,divisor);
    std::cout<<dividend<<"/"<<divisor<<" = "<<result<<"\n";
  }catch(const char* exp){
    std::cout<<"Exception : "<<exp<<"\n";
  }catch(...){
    std::cout<<"Exception occured! Type unknown\n";
  }
}
