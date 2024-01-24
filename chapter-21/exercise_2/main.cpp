#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <ctime>

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

// Unary function
template <typename T>
class DoubleNumber{
public:
  void operator () (const T &element )const{
    std::cout<<"DoubleNumber["<<count<<"] = "<<element*element<<"\n";
    ++count;
  }
private:
  static int count;
};

template <typename T>
int DoubleNumber<T>::count=0;

int main(int argc,char *argv[]){
  std::vector<double> NumDouble;
  Random number(0,10); // generate a random number between [0,10]  
  std::cout<<"Please enter the number of elements in the vector : ";
  int size{0};
  std::cin>>size;
  for(int i=0;i<size;++i)
    NumDouble.push_back(number.randomDouble());
  std::cout<<"\nThe initial data are : \n\n";
  print(NumDouble,"NumDouble");
  std::cout<<"\nEach element doubled  : \n\n";
  std::for_each(NumDouble.begin(),NumDouble.end(),DoubleNumber<double>());
  
  return 0;
}
