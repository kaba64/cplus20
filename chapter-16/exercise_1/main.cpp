#include <iostream>
#include <string>
#include <algorithm>

int main(int argc,char *argv[]){

  std::string input;
  std::cout<<"Please enter a word for testing palindrome!\n";
  std::cin>>input;
  std::string reverseStr(input);
  std::reverse(reverseStr.begin(),reverseStr.end());
  if(input==reverseStr)
    std::cout<<"The word is palindrome!\n";
  else
    std::cout<<"The word is not palindrome!\n";
  return 0;
}
