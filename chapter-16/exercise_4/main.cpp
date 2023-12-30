#include <iostream>
#include <string>
#include <algorithm>

int main(int argc,char *argv[]){

  
  std::string str1("I");
  std::string str2("Love");
  std::string str3("STL");
  std::string str4("String");
  str1.append(" "+str2);
  str1.append(" "+str3);
  str1.append(" "+str4);
  
  std::cout<<str1<<"\n";
  return 0;
}
