#include <iostream>

class Vehicle{
public:
  Vehicle(){std::cout<<"The constructor of Vehicle!\n";}
  ~Vehicle(){std::cout<<"The destructor of Vehicle!\n";}
  /*The destructor of the Car class will not be invoked
   and this issue can be fixed by using the virtual specifier 
   for the destructor. Thus, use the below destructor instead!*/
  //virtual ~Vehicle(){std::cout<<"The destructor of Vehicle!\n";}
};

class Car: public Vehicle{
public:
  Car(){std::cout<<"The constructor of Car!\n";}
  ~Car(){std::cout<<"The destructor of Car!\n";}
};

int main(void){
  Vehicle* myRacer = new Car;
  delete myRacer;
}
