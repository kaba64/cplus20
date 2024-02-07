
class Fish{
protected:
  bool IsFreshWaterFish;
public:
  Fish(bool n);
  void Swim();
};

class Tuna: public Fish{
public:
  Tuna(bool nt=false);
  void Swim();
};

class Carp: public Fish{
public:
  Carp(bool nc=true);
  void Swim();
};
