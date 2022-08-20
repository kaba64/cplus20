#include <iostream>
#include <string>

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
  void Swim(std::string name)
  {
    if(IsFreshWaterFish)
      std::cout<<name<<" usually swims in lake"<<"\n";
    else
      std::cout<<name<<" usually Swim in sea"<<"\n";
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
  //mylunch.Swim("Carp"); /* It will produce error since Crap::Swim() will hide both of the methods from the compiler. */
  mylunch.Fish::Swim("Carp");
  std::cout<<"Dinder: ";
  mydinner.Swim();
}
