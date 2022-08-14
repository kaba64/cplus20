#include <iostream>
#include <string>

class Human{
private:
  int age;
  std::string name;
public:
  /*Use keyword explicit to avoid implicit conversion */
  explicit Human(int agein,std::string namein="A human being")
    :age(agein)
  {
    name = namein;
  }
  int GetAge()const{return age;}
  std::string GetName()const{return name;}
};

void PrintHi(Human person);

auto main() -> int
{
  Human me(37);
  Human you(1);
  me.GetAge();
  PrintHi(me);
  PrintHi(3); /* Since the only input to the constructor is integer, the compiler will do the implicit conversion */
}

void PrintHi(Human person){
  std::cout<<"The name of person is : "<<person.GetName()<<"\n";
  std::cout<<"The age of person is : "<<person.GetAge()<<"\n";
}
