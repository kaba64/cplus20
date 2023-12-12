#include <iostream>

template <typename T1=int, typename T2=double>

class HoldPair{
private:
  T1 value1;
  T2 value2;
public:
  HoldPair(const T1& val1, const T2& val2)
    :value1(val1), value2(val2){}
  const T1& GetFirstValue()const{return value1;}
  const	T2& GetSecondValue()const{return value2;}
};

int main(int argc, char *argv[]){

  HoldPair<> pairIntDoub(100,5000555.556);
  HoldPair<short,const char*> pairShortChar(25,"Learning Templates and expanding my knowledge in C++ are enjoyable!");

  
  std::cout<<"The first object's size is "<<sizeof(pairIntDoub)<<" and contains - "<<std::endl; 
  std::cout<<"value 1 : "<<pairIntDoub.GetFirstValue()<<std::endl;
  std::cout<<"value 2 : "<<pairIntDoub.GetSecondValue()<<std::endl;

  std::cout<<"The second object's size is "<<sizeof(pairShortChar)<<" and contains - "<<std::endl;
  std::cout<<"value 1 : "<<pairShortChar.GetFirstValue()<<std::endl;
  std::cout<<"value 2 : "<<pairShortChar.GetSecondValue()<<std::endl;

  return 0;
}
