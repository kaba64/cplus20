#include <iostream>

class Fish{
public:
  bool healthy;
  int numbers;
  virtual void Swim()const=0;
};

class Tuna:public Fish
{
public:
  void Swim()const{std::cout<<"Tuna can swim!\n";}
};

class Carp:public Fish
{
public:
  void Swim()const{std::cout<<"Carp can swim!\n";}
};

void MakeFishSwim(const Fish& InputFish);

auto main() -> int
{
  //Fish meal;
  Tuna mylunch;
  Carp mydinner;
  MakeFishSwim(mylunch);
  MakeFishSwim(mydinner);
}

void MakeFishSwim(const Fish& InputFish){InputFish.Swim();}
