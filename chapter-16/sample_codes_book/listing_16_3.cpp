#include <iostream>
#include <string>

int main(int argc,char **argv){

  // concatenate
  std::string sampleString1("Hello ");
  std::string sampleString12("string!");
  std::cout<<"sampleString1 before concatenate is : "<<sampleString1<<"\n";
  
  sampleString1+=sampleString12;
  std::cout<<"sampleString1 after concatenate is : "<<sampleString1<<"\n";

  //append() method
  std::string sampleString3("I enjoy learning ");
  std::string sampleString4("C++ with STL and OOP!");
  std::cout<<"sampleString3 before concatenate is : "<<sampleString3<<"\n";
  
  sampleString3.append(sampleString4);
  std::cout<<"sampleString3 after using append() is : "<<sampleString3<<"\n";
  return 0;
}
