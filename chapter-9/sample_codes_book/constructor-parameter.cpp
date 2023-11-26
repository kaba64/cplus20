#include <iostream>
#include <string>

class Human{
public:
  Human(std::string f = "",std::string l = "", int agein = 37)
    :first{f}, last{l}, age{agein} {}
  std::string get_full_name(){return first+" "+last;}
  int get_age(){return age;}
private:
  std::string first, last;
  int age;
};

auto main() -> int
{
  //Human me;
  Human me{"Kazem","Bazesefidpar"};
  std::cout<<"The full name : "<<me.get_full_name()<<"\n";
  std::cout<<"The age : "<<me.get_age()<<"\n";
}
