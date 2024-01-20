#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename elementType>

class DisplayElement{
public:
  void operator ()(const elementType& element)const{
    std::cout<<element<<" ";
  }
};

int main(int argc,char *argv[]){

  std::vector<int> intInVec{0,3,88,-1,-55,999,-11111,3};
  std::cout<<"Vector of integers contains: \n";
  std::for_each(intInVec.begin(),intInVec.end(),DisplayElement<int>());
  std::cout<<"\n";

  std::list<char> charInList{'C','+','+',' ','i','s',' ','a','m','a','z','i','n','g','!'};
  std::cout<<"\nList of Char contains: \n";
  std::for_each(charInList.begin(),charInList.end(),DisplayElement<char>());
  std::cout<<"\n";
  return 0;
}
