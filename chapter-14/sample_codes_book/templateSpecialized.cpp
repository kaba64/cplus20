#include <iostream>
#include <string>

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

//Specialization of HoldPair
template<> class HoldPair<int,int>{
private:
  int value1;
  int value2;
  std::string funStr;
public:
  HoldPair(const int& val1, const int& val2)
    :value1(val1), value2(val2){}
  const int& GetFirstValue()const{return value1;}
  const int& GetSecondValue()const{return value2;}
  void SetString(const std::string sttingIn){ funStr=sttingIn;}
  const std::string& GetString()const{return funStr;}
};


int main(int argc, char *argv[]){

  HoldPair<> pairIntInt(10,100);
  
  std::cout<<"The object's size is "<<sizeof(pairIntInt)<<" and contains - "<<std::endl; 
  std::cout<<"value 1 : "<<pairIntInt.GetFirstValue()<<std::endl;
  std::cout<<"value 2 : "<<pairIntInt.GetSecondValue()<<std::endl;
  /*It will produce a compilation error since with arguments HoldPair<>
   the instantiated object is not the specialized one*/
  //pairIntInt.SetString("C++ prograaming is emazing!");
  
  HoldPair<int,int> pairIntIntStr(10,100);
  std::cout<<"The object's size is "<<sizeof(pairIntIntStr)<<" and contains - "<<std::endl;
  std::cout<<"value 1 : "<<pairIntIntStr.GetFirstValue()<<std::endl;
  std::cout<<"value 2 : "<<pairIntIntStr.GetSecondValue()<<std::endl;
  pairIntIntStr.SetString("C++ prograaming is amazing!");
  std::cout<<"string value is : "<<pairIntIntStr.GetString()<<std::endl;

  return 0;
}
