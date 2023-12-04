#include <iostream>
#include <memory> // to use unique_ptr
#include <string>

class Date{
private:
  int day, month, year;
  std::string dateInString;
public:
  Date(int month_in, int day_in, int year_in)
    :month(month_in), day(day_in), year(year_in){std::cout<<"Constructor of Date"<<"\n";}
  void DisplayDate(){std::cout<<month<<"/"<<day<<"/"<<year<<std::endl;}
  ~Date(){std::cout<<"Destructor of Date"<<"\n";}
};

int main(void){

  std::unique_ptr<int> smartIntPtr(new int);
  *smartIntPtr = 42;
  std::cout<<"Integer value is: "<<*smartIntPtr<<"\n";
  std::unique_ptr<Date> smartHolday (new Date(12,22,2023));
  std::cout<<"The date for holday is: ";
  smartHolday->DisplayDate();
  return 0;
}
