#include <iostream>

class Fish{
public:
  virtual void Swim(){std::cout<<"Fish swims!"<<"\n";}
};

class Tuna:public Fish{
public:
  void Swim(){std::cout<<"Tuna swims!"<<"\n";}
};

void MakeFishSwim(Fish& inputFish){inputFish.Swim();}

auto main() -> int
{
  Tuna myDinner;
  myDinner.Swim();
  MakeFishSwim(myDinner);
}
