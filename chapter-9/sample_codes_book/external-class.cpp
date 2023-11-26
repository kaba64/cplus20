#include <iostream>
#include <string>

class Human{
public:
  Human(std::string f = "",std::string l = "", int agein = 37)
    :first{f}, last{l}, age{agein} {}
  std::string get_full_name(){return first+" "+last;}
  int get_age(){return age;}
  ~Human(){std::cout<<"Destructor executed!"<<"\n";};
private:
  friend class Utility;
  std::string first, last;
  int age;
};

class Utility{
public:
  static void DisplayInformation(const Human& person)
  {
    std::cout<<"The person full name is "<<person.first<<" "<<person.last<<" with the age "<<person.age<<".\n";
  }
private:
};

auto main() -> int
{
  //Human me;
  Human me{"Kazem","Bazesefidpar"};
  Utility::DisplayInformation(me);
  //std::cout<<"The full name : "<<me.get_full_name()<<"\n";
  //std::cout<<"The age : "<<me.get_age()<<"\n";
  std::cout<<"The statements finished!"<<"\n";
}
