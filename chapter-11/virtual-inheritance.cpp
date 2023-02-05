#include <iostream>

class Animal{
public:
  Animal(){std::cout<<"Animal constructor."<<"\n";}
  int age;
};

class Mammal:public virtual Animal{
public:
  Mammal(){std::cout<<"Mammal constructor."<<"\n";}
};
class Bird:public virtual Animal{
public:
  Bird(){std::cout<<"Bird constructor."<<"\n";}
};
class Reptile:public virtual Animal{
public:
  Reptile(){std::cout<<"Reptile constructor."<<"\n";}
};

class Platypus final:public Mammal, public Bird, public Reptile
/* The keyword final will be ensure that the 
class Platyous cannot be used as a base class.*/
{
public:
  Platypus(){std::cout<<"Platypus constructor."<<"\n";}
};

auto main() -> int
{
  Platypus duckBird;
  //duckBird.age=5;
}
