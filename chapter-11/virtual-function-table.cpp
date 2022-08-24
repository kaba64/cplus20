#include <iostream>

class FishSimple{
public:
  bool healthy;
  int numbers;
  void Swim(){std::cout<<"Fish swims!"<<"\n";}
};

class Fish{
public:
  bool healthy;
  int numbers;
  virtual void Swim(){std::cout<<"Fish swims!"<<"\n";}
};

auto main() -> int
{
  FishSimple a;
  Fish b;
  std::cout<<"Size of the class without virtual function : "<<sizeof(a)<<"\n";
  std::cout<<"Size of the class with virtual function : "<<sizeof(b)<<"\n";
}
