#include <iostream>

class Motor
{
public:
  void SwitchIgnition(){std::cout<<"Ignition on"<<"\n";}
  void PumpFuel(){std::cout<<"Fuel in cylinders"<<"\n";}
  void FireCylinders(){std::cout<<"Vrooom!"<<"\n";}
};

class Car:protected Motor
{
public:
  void Move()
  {
    SwitchIgnition();
    PumpFuel();
    FireCylinders();
  }
};

class RaceCar:protected Car
{
public:
  void Move()
  {
    SwitchIgnition();
    PumpFuel();
    FireCylinders();
    FireCylinders();
    FireCylinders();
  }
};

auto main() -> int
{
  RaceCar mycar;
  mycar.Move();
}
