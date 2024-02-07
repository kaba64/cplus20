#include <iostream>
#include "Crap_class.h"

Fish::Fish(bool n)
  :IsFreshWaterFish(n){}

void Fish::Swim(){
  if(IsFreshWaterFish)
    std::cout<<"Swim in lake"<<"\n";
  else
    std::cout<<"Swim in sea"<<"\n";
}

Tuna::Tuna(bool nt)
  :Fish(nt){}
void Tuna::Swim(){std::cout<<"Tuna swims fast in the sea!"<<"\n";Fish::Swim();}

Carp::Carp(bool nc)
  :Fish(nc){}
void Carp::Swim(){std::cout<<"Crap swims fast in the lake!"<<"\n";Fish::Swim();}
