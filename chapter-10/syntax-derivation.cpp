#include <iostream>

class Fish
{
public:
  bool IsFreshWaterFish;

  void Swim()
  {
    if(IsFreshWaterFish)
      std::cout<<"Swim in lake"<<"\n";
    else
      std::cout<<"Swim in sea"<<"\n";
  }
};

class Tuna: public Fish
{
public:
  Tuna()
  {
    IsFreshWaterFish=false;
  }
};

class Carp: public Fish
{
public:
  Carp()
  {
    IsFreshWaterFish=true;
  }
};

auto main() -> int
{
  Carp mylunch;
  Tuna mydinner;
  std::cout<<"About my today food : "<<"\n";
  std::cout<<"Lunch: ";
  mylunch.Swim();
  std::cout<<"Dinder: ";
  mydinner.Swim();
}
