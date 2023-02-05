#include <iostream>
#include <string>

class Human{
public:
  Human(std::string f,std::string l, int agein)
    :first{f}, last{l}, age{agein} {}
  std::string get_full_name(){return first+" "+last;}
  int get_age(){return age;}
private:
  std::string first, last;
  int age;
};

auto main() -> int
{
  //Human me{"Kazem","Bazesefidpar",37};
  //std::cout<<"The full name : "<<me.get_full_name()<<"\n";
  //std::cout<<"The age : "<<me.get_age()<<"\n";
  Human* ptrme = new Human{"Kazem","Bazesefidpar",37};
  std::cout<<"The full name : "<<ptrme->get_full_name()<<"\n";
  std::cout<<"The age : "<<ptrme->get_age()<<"\n";
  delete ptrme;
}
