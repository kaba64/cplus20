#include <iostream>
#include <string>

auto main() -> int
{
  std::string first_name;
  std::cout<<"Enter the first name :"<<"\n";
  getline(std::cin,first_name);
  std::string last_name;
  std::cout<<"Enter the last name :"<<"\n";
  getline(std::cin,last_name);
  first_name+=" "+last_name;
  std::cout<<first_name<<"\n";
}
