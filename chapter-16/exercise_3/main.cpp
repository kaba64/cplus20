#include <iostream>
#include <string>
#include <algorithm>

int main(int argc,char *argv[]){

  // just consider alphabetic character, so ignore white space and special characters
  std::string strToConvert("We will write a code to convert every alternte character of a string to uppercase");

  std::cout<<strToConvert<<"\n";
  int count{0};

  for(size_t iterSt = 0;iterSt<strToConvert.size();++iterSt){
    if(std::isalpha(static_cast<unsigned char>(strToConvert[iterSt]))){
      if(count%2==0)
	std::transform(strToConvert.begin()+iterSt,strToConvert.begin()+iterSt+1,strToConvert.begin()+iterSt,::toupper);
      count++;
    }
  }
  
  std::cout<<strToConvert<<"\n";
  return 0;
}
