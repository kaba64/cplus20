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
  void Swim(){std::cout<<"Tuna swims fast in the sea!"<<"\n";Fish::Swim();}
};

class Carp: public Fish
{
public:
  Carp(bool nc=true)
    :Fish(nc)
  {
  }
  void Swim(){std::cout<<"Crap swims fast in the lake!"<<"\n";Fish::Swim();}
};

auto main() -> int
{
  Carp mylunch;
  Tuna mydinner;
  std::cout<<"About my today food : "<<"\n";
  std::cout<<"Lunch: ";
  mylunch.Swim();
  //mylunch.Fish::Swim();
  /*To invoke the member function of the base class which has been overriden. 
    It will not generate error since Swim function is public*/
  std::cout<<"Dinder: ";
  mydinner.Swim();
  //mydinner.Fish::Swim();
  mylunch.IsFreshWaterFish=true;
  /*It will cause compilation error since IsFreshWaterFish is protected
    so that jus derived classes Carp and Tuna can access it.*/
}
