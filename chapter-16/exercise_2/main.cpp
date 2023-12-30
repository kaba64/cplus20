#include <iostream>
#include <string>
#include <algorithm>

int main(int argc,char *argv[]){

  std::string input;
  std::cout<<"Please enter a sentence, and the code will find the number of vowels in it.\n";
  getline(std::cin,input);

  unsigned int vowelsLength = 6; // vowels
  unsigned int numberOfVowels{0}; 
  size_t position = input.find("vowels",0);
  while(position!=std::string::npos){
    numberOfVowels++;
    std::cout<<"position = "<<position<<"\n";
    position+=(vowelsLength-1);
    position = input.find("vowels",position);
  }
  if(numberOfVowels==0)
    std::cout<<"vowels not found in the sentence\n";
  else
    std::cout<<"vowels found "<<numberOfVowels<<" times in the sentence\n";
  
  return 0;
}
