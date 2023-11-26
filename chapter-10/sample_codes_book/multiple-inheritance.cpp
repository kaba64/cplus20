#include <iostream>

class Mother{
public:
  void cooking() const{std::cout<<"My cooking is good!"<<"\n";}
  void merciful() const{std::cout<<"I would be kind to everyone!"<<"\n";}
  //void hobbies() const{std::cout<<"I usually spent my leasure time with my friends."<<"\n";}
};

class Father{
public:
  void earning() const{std::cout<<"I earn 27000 kr each month."<<"\n";}
  void hobbies() const{std::cout<<"I usually go to the gym"<<"\n";}
};

class child:public Mother, public Father
{
public:
  void education() const {std::cout<<"I am doing my PhD study!"<<"\n";}
};

auto main() -> int
{
  child me;
  me.education();
  me.hobbies();
  me.merciful();
}
