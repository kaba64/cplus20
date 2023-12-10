#include <iostream>
#include <string>

#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"

int main(int argc, char *argv[]){

  std::cout<<"size of PI : "<<sizeof(PI)<<"\n";
  
  int numbers[ARRAY_LENGTH] = {0};
  std::cout<<"Array's length: "<<sizeof(numbers)/sizeof(numbers[0])<<"\n";
  
  std::cout<<"Enter a radius: ";
  MY_DOUBLE radius;
  std::cin>>radius;
  std::cout<<"Area is : "<<PI*radius*radius<<"\n";

  std::string favoriteWhisky(FAV_WHISKY);
  std::cout<<"My favorite drik is : "<<favoriteWhisky<<"\n";
  
  return 0;
}
