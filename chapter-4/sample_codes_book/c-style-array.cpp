#include <iostream>
#include <string.h>

auto main() -> int
{
  char hello[] = {'H','e','l','l','o',' ','K','a','z','e','m','\0',' '};
  std::cout<<hello<<"\n";
  std::cout<<"The lenght of the string is "<<strlen(hello)<<std::endl; /* The strlen serch to find \0', 
									  so that the lengh of string will 
									  be two less than its size*/
}
