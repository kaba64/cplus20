#include <iostream>
#include <exception>
#include <string>

class CustomException: public std::exception{
private:
  std::string reason;
public:
  CustomException(const char* why)
    :reason(why){}
  const char* what() const noexcept override{
    return reason.c_str(); 
  }
};

double Divide(const double dividend,const double divisor){
  if(divisor==0.0)
    throw CustomException("CustomException: Division by 0");
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
  }catch(const std::exception& exp){
    std::cout<<exp.what()<<"\n";
  }catch(...){
    std::cout<<"Exception occured! Type unknown\n";
  }
}
