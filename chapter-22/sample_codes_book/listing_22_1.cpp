#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

inline auto lambda = []<typename T>(const T &val){std::cout<<val<<" ";};

int main(int argc,char *argv[]){
  
  std::vector<int> numVecInt{1,-33,33,45,66,77,89};

  std::cout<<"\nDisplay the content of the integer vector using Lambda function\n\n";
  std::for_each(numVecInt.begin(),numVecInt.end(),lambda);
  std::cout<<"\n";

  std::list<char> charsList{'H','a','p','p','y',' ','C','+','+',' ','c','o','d','i','n','g','!'};
  std::cout<<"\nDisplay the content of the char list using Lambda function\n\n";
  std::for_each(charsList.begin(),charsList.end(),lambda);
  std::cout<<"\n";
  return 0;
}
