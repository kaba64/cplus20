#include <iostream>
#include <string>

class Human{
private:
  void Talk(std::string namein)const{std::cout<<namein<<"\n";}
  int age;
  std::string name;
public:
  explicit Human(int agein,std::string namein="A human being")
    :age(agein)
  {
    name = namein;
  }
  void Introduce()const{Talk("Hi everyone!");}
  int GetAge()const{return age;}
  std::string GetName()const{return name;}
};

void PrintHi(Human person);

auto main() -> int
{
  Human me(37);
  me.Introduce();
}
