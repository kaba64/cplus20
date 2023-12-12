#include <iostream>
#include <string>

template <typename T1,typename T2>

class HoldPair{
private:
  T1 value1;
  T2 name;
public:
  static int nameDecade;
  HoldPair(const T1& val1, const T2& val2)
    :value1(val1), name(val2){}
  const T1& GetYear()const{return value1;}
  const	T2& GetName()const{return name;}
  void SetDecade(const int decadeIn){nameDecade=decadeIn;}
  const int GetDecade()const{return nameDecade;}
};

template <typename T1,typename T2> int HoldPair<T1,T2>::nameDecade;

int main(int argc, char *argv[]){
  
  HoldPair<int,std::string> first(28,"Jack");
  first.SetDecade(90);
  
  std::cout<<"The first person's size is "<<sizeof(first)<<" and contains - "<<std::endl; 
  std::cout<<"Name : "<<first.GetName()<<std::endl;
  std::cout<<"Age : "<<first.GetYear()<<std::endl;
  std::cout<<"Decade : "<<first.GetDecade()<<std::endl;

  HoldPair<int,std::string> second(31,"Pedi");

  std::cout<<"The second person's size is "<<sizeof(second)<<" and contains - "<<std::endl;
  std::cout<<"Name : "<<second.GetName()<<std::endl;
  std::cout<<"Age : "<<second.GetYear()<<std::endl;
  std::cout<<"Decade : "<<second.GetDecade()<<std::endl;
  
  HoldPair<double,std::string> Skill(10.5,"Programming");

  std::cout<<"The Skill's size is "<<sizeof(Skill)<<" and contains - "<<std::endl;
  std::cout<<"Skill name : "<<Skill.GetName()<<std::endl;
  std::cout<<"How many years : "<<Skill.GetYear()<<std::endl;
  /*it will be zero since it has not been initilized for the HoldPair<double,std::string> yet!*/
  std::cout<<"Decade : "<<Skill.GetDecade()<<std::endl;
  
  return 0;
}
