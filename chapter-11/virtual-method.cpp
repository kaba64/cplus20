#include <iostream>

class Fish
{
protected:
  bool IsFreshWaterFish;
public:
  Fish(bool n)
    :IsFreshWaterFish(n){}
  virtual void Swim()
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
    :Fish(nt){}
  void Swim(){std::cout<<"Tuna swims fast in the sea!"<<"\n";Fish::Swim();}
};

class Carp: public Fish
{
public:
  Carp(bool nc=true)
    :Fish(nc){}
  void Swim(){std::cout<<"Crap swims fast in the lake!"<<"\n";Fish::Swim();}
};

void MakeFishSwim(Fish& inputFish);

auto main() -> int
{
  Carp mylunch;
  MakeFishSwim(mylunch);
}

void MakeFishSwim(Fish& inputFish){inputFish.Swim();}
