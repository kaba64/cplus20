/*Example: listing 10.8 of the book page 298*/
#include <iostream>

class Motor
{
public:
  void SwitchIgnition(){std::cout<<"Ignition on"<<"\n";}
  void PumpFuel(){std::cout<<"Fuel in cylinders"<<"\n";}
  void FireCylinders(){std::cout<<"Vrooom!"<<"\n";}
};

class Car:private Motor
{
public:
  void Move()
  {
    SwitchIgnition();
    PumpFuel();
    FireCylinders();
  }
};

auto main() -> int
{
  Car myCar, theirCar;
  myCar.Move();
  /*This will generate compilton error due
    to the private inheritance from the bse class*/
  //theirCar.PumpFuel();
}
