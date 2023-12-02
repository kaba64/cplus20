#include <iostream>

class Fish
{
public:
  Fish(){std::cout<<"Constructor Fish class.\n";}
  virtual ~Fish(){std::cout<<"Destructor Fish class.\n";}
};

class Tuna: public Fish
{
public:
  Tuna(){std::cout<<"Constructor Tuna class.\n";}
  ~Tuna(){std::cout<<"Destructor Tuna class.\n";}
};

class Carp: public Fish
{
public:
  Carp(){std::cout<<"Constructor Carp class.\n";}
  ~Carp(){std::cout<<"Destructor Carp class.\n";}
};

void DeleteFish(Fish* pFish);
auto main() -> int
{
  std::cout<<"Allocating a Tuna object on the free store : "<<"\n";
  Tuna* pTuna = new Tuna;
  std::cout<<"Deleting the Tuna object : "<<"\n";
  DeleteFish(pTuna);
  std::cout<<"Instantiating a Tuna object on the stack : "<<"\n";
  Tuna myDinner;
  std::cout<<"Automatic destruction as it goes out of scope : "<<"\n";
}

void DeleteFish(Fish* pFish){delete pFish;}
