// Template function listing 14.3 of book page 413

#include <iostream>
#include <string>

template<typename Type>

const Type& GetMax(const Type& value1, const Type& value2){return (value1>value2 ? value1:value2);}

template<typename Type>
void DisplayComparison(const Type& value1, const Type& value2){
  std::cout<<"GetMax("<<value1<<","<<value2<<") = "<<GetMax(value1,value2)<<"\n";
}

int main(int argc,char *argv[]){
  int intNum1{8}, intNum2{99};
  DisplayComparison(intNum1,intNum2);
  
  double numDoub1{8.8}, numDoub2{5.5};
  DisplayComparison(numDoub1,numDoub2);

  std::string name1{"Kazem"}, name2{"Sadegh"};
  DisplayComparison(name1,name2);

  return 0;
}
