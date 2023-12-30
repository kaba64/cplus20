#include <iostream>
#include <string>
#include <algorithm>

int main(int argc,char *argv[]){

  std::string strSearch("Good day string! Today is beautiful!");
  std::cout<<"The string to search for 'a' in it is : "<<strSearch<<"\n";
  size_t iter = strSearch.find('a',0);
  
  while(iter<strSearch.size()){
    std::cout<<"a is in the position "<<iter<<"\n";
    iter = strSearch.find('a',iter+1);
  }
  
  return 0;
}
