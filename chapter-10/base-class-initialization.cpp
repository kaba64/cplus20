#include <iostream>

class Fish
{
protected:
  bool IsFreshWaterFish;
public:
  Fish(bool n)
    :IsFreshWaterFish(n)
  {
  }
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
  Tuna(bool nt=false)
    :Fish(nt)
  {
  }
};

class Carp: public Fish
{
public:
  Carp(bool nc=true)
    :Fish(nc)
  {
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
  //mylunch.IsFreshWaterFish=true;
}
