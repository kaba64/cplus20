// Testing the dynamic_cast<...>
// The listing 13.1 page 391
// Kazem Bazesefidpar, December 9, 2023

#include <iostream>

class Fish{
public:
  virtual void Swim(){std::cout<<"Fish swims in water\n";}
  virtual ~Fish(){std::cout<<"Distructor of fish class\n";}
};

class Tuna: public Fish{
public:
  void Swim(){std::cout<<"Tuna swims real fast in sea\n";}
  void Becomedinner(){std::cout<<"Tuna became dinner in Sushi\n";}
};

class Carp: public Fish{
public:
  void Swim(){std::cout<<"Carp swims real slow in the lake\n";}
  void Talk(){std::cout<<"Carp talked Carp\n";}
};

void DetectFishType(Fish* objFish){
  Tuna * objTuna = dynamic_cast<Tuna *>(objFish);
  if(objTuna){
    std::cout<<"Detected Tuna!\n";
    objTuna->Becomedinner();
  }
  Carp * objCarp = dynamic_cast<Carp *>(objFish);
  if(objCarp){
    std::cout<<"Detected Carp!\n";
    objCarp->Talk();
  }
  std::cout<<"Verifying type using virtual Fish::Swim()\n";
  objFish->Swim();
}

int main(int argc, char *argv[]){
  Carp myLunch;
  Tuna myDinner;
  
  DetectFishType(&myLunch);
  std::cout<<"\n";
  DetectFishType(&myDinner);
  return 0;
}
