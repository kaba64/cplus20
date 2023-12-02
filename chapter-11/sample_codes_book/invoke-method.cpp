#include <iostream>

class Fish{
public:
  void Swim(){std::cout<<"Fish swims!"<<"\n";}
};

class Tuna:public Fish{
public:/*Adding the specfier virtual will resolve the issue : virtual void ...*/
  void Swim(){std::cout<<"Tuna swims!"<<"\n";}
};
/*Here the object is passed by reference to Fish class
 so that just the base class informaton will be passed to
 the function. If we do not use virual specifier in the base
 class the issue will not be resolved!
 This is how polymorphism works!*/
void MakeFishSwim(Fish& inputFish){inputFish.Swim();}

auto main() -> int
{
  Tuna myDinner;
  myDinner.Swim();
  MakeFishSwim(myDinner);
}
