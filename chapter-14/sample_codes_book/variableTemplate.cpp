#include <iostream>

template<typename Res, typename valType>
void Sum(Res& result,const valType& val){
  std::cout<<"In the first function : val = "<<val<<"; result = "<<result<<"\n";
  result+=val;
}

template<typename Res, typename first, typename... Rest>
void Sum(Res& result,const first& val1, const Rest&... valN){
  std::cout<<"In the second function : val1 = "<<val1<<"; result = "<<result<<"\n";
  result+=val1;
  return Sum(result,valN ...);
}

int main(void){
  double dResult = 0.0;
  Sum(dResult,1.0,2.0,3.0,4.0,5.0,6.0);
  std::cout<<"dResult = "<<dResult<<"\n";

  std::cout<<"\n";
  std::string strResult;
  Sum(strResult,"Hello ","Template ","in c++!"," So fun in learning");
  std::cout<<"strResult = "<<strResult.c_str()<<"\n";
  return 0;
}
