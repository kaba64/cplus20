#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <ctime>
#include <cmath>

// Create random numbers 
class Random{
private:
  int a, b;
public:
  Random(const int aIn=0,const int bIn=1)
    :a(aIn),b(bIn){
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
  }
  // compute a double random number  
  double randomDoub(){return static_cast<double>(std::rand()) / static_cast<double>(RAND_MAX);}
  // Compute a integer randon number in [a,b] where b>a
  int randomInt(){return a + (std::rand() % (b - a));}
  // Compute a double randon number in [a,b] where b>a
  double randomDouble(){return static_cast<double>(randomInt()) + randomDoub();}
};

// Print the element of a container 
template<typename T> void print(const T &d,const std::string &name){
  if(d.cbegin()==d.cend())
    std::cout<<"The container is empty\n";
  else{
    for(auto iter = d.begin();iter!=d.end();++iter){
      size_t index  = distance(d.begin(),iter);
      std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
    }
  }
}

int main(int argc,char *argv[]){
  Random randomNumber(0,10);
  std::cout<<"Enter the number of elements : ";
  int nsize{0};
  std::cin>>nsize;
  std::vector<double> numDoublesRounded(nsize);
  
  for(size_t i=0;i<numDoublesRounded.size();++i)
    numDoublesRounded.at(i) = std::round(randomNumber.randomDouble());
  
  std::cout<<"Enter an integer number in [0,10] to search in the vector : ";
  double search;
  std::cin>>search;

  auto element = std::find(numDoublesRounded.cbegin(),numDoublesRounded.cend(),search);

  std::cout<<"\nThe vector contains : \n\n";
  print(numDoublesRounded,"numDoublesRounded");

  if(element !=numDoublesRounded.cend())
    std::cout<<"\nThe number is found in "<<std::distance(numDoublesRounded.cbegin(),element)<<" position\n\n";
  else
    std::cout<<"\nThe number is not found.\n\n";

  return 0;
}
