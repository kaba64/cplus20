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
  Car mycar;
  //mycar.Move();
  mycar.PumpFuel();
}
