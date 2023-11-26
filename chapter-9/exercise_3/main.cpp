#include <iostream>
#include <string>

class Human{
  int age;
  std::string name;
public:
  Human(int age_in,std::string name_in)
    :age(age_in),name(name_in){}
  void Read_Age ()const{std::cout<<"The age of the person is "<<age<<"\n";}
  void Read_Name()const{std::cout<<"The name of the person is "<<name<<"\n";}
};

int main(void){

  Human humanBeing(7,"A student");
  humanBeing.Read_Age();
  humanBeing.Read_Name();
  return 0;
}
