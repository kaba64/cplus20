#include <iostream>
#include <string>

int main(int argc, char** argv){

  char *staticStr = "Hello C-Style conversoin";
  std::cout<<"staticStr = "<<staticStr<<std::endl;
  
  std::string conversionStr = (std::string)staticStr;
  std::cout<<"The conversion of char * (staticStr) to string is: "<<conversionStr<<std::endl;

  int *intArray = (int *)staticStr;
  std::cout<<"The conversion of char * (staticStr) to int * is: "<<*intArray<<std::endl;

  /*Uncommenting the following will result in compilation error since
   the conversion of two incompatible types is occuring*/
  //int *intArray = static_cast<int *>(staticStr);
  
  return 0;
}
