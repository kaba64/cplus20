
class Fish{
protected:
  bool IsFreshWaterFish;
public:
  Fish(bool n);
  virtual void Swim();
  virtual ~Fish();
};

class Tuna: public Fish{
public:
  Tuna(bool nt=false);
  void Swim();
  ~Tuna();
};

class Carp: public Fish{
public:
  Carp(bool nc=true);
  void Swim();
  ~Carp();
};
