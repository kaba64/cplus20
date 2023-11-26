#include <iostream>
#include <string>

class Human{
public:
  explicit Human(std::string f = "",std::string l = "", int agein = 37)
    :first{f}, last{l}, age{agein} {std::cout<<"Constructor executed!"<<"\n";}
  std::string get_full_name()const{return first+" "+last;}
  int get_age ()const{return age;}
  friend void DisplayInformation(const Human& person);
  ~Human(){std::cout<<"Destructor executed!"<<"\n";};
private:
  std::string first, last;
  int age;
};

void DisplayInformation(const Human& person);

auto main() -> int
{
  //Human me;
  Human me{"Kazem","Bazesefidpar"};
  //std::cout<<"The full name : "<<me.get_full_name()<<"\n";
  //std::cout<<"The age : "<<me.get_age()<<"\n";
  DisplayInformation(me);
  std::cout<<"The statements finished!"<<"\n";
}

void DisplayInformation(const Human& person){
  std::cout<<"The person full name is "<<person.first<<" "<<person.last<<" with the age "<<person.age<<".\n";
}
