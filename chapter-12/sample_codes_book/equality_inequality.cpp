// The equality and inequaality operators are overloaded
// for the class Date in this code from Listng 12.6 of the book page 359
// Kazem Bazesefidpar, December 6, 2023

#include <iostream>
#include <sstream>
#include <string>
#include <ctime>

class Date{
private:
  int day, month, year;
  std::string dateInstring;
public:
  Date(int monthin=0,int dayin=0,int yearin=0)
    :month(monthin),day(dayin),year(yearin){}
  Date operator ++(){ //prefix increment
    if(month==12 && day==31){
      ++year;
      month=1;
      day=1;
    }else if((month==2 && day==28) || ((month==4 || month==6 || month==9 || month==11) && day==30) || day==31){
      ++month;
      day = 1;
    }else{
      ++day;
    }
    return *this;
  }
  Date operator ++(int){ //postfix increment
    Date copy(month,day,year);
    if(month==12 && day==31){
      ++year;
      month=1;
      day=1;
    }else if((month==2 && day==28) || ((month==4 || month==6 || month==9 || month==11) && day==30) || day==31){
      ++month;
      day = 1;
    }else{
      ++day;
    }
    return copy;
  }
  Date operator --(){ //prefix decrement
    if(month == 1 && day==1){
      --year;
      month=12;
      day=31;
    }else if(month==3 && day==1){
      --month;
      day=28;
    }else if((month==5 || month==7 || month==10 || month==12) && day==1){
      --month;
      day=30;
    }else if(day==1){
      --month;
      day=31;
    }else{
      --day;
    }
    return *this;
  }
  void operator +=(const int dayAdd){
    for(int i=dayAdd;i>0;--i)
      ++(*this);
  }
  void operator -=(const int daySubtract){
    for(int i=daySubtract;i>0;--i)
      --(*this);
  }
  // The overloaded equlity operator
  bool operator == (const Date &compareDate) const{
    std::cout<<"The input argument to the overloaded equality operator is :";
    compareDate.DisplayDate();
    return (day == compareDate.day && month == compareDate.month && year == compareDate.year);
  }
  bool operator !=(const Date &compareDate) const{
    std::cout<<"The input argument to the overloaded inequality operator is :";
    compareDate.DisplayDate();
    return !(this->operator ==(compareDate));
  }
  void DisplayDate()const{
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
  }
};


int main(void){
  // get today's date
  time_t t;   // get time now
  time(&t);
  struct tm * today_d = localtime( & t );
  
  Date today(today_d->tm_mon+1,today_d->tm_mday,today_d->tm_year+1900); /* input formate : m/d/y*/
  Date tomorrow(today_d->tm_mon+1,today_d->tm_mday+1,today_d->tm_year+1900);
  std::cout<<"Today date is : ";
  today.DisplayDate();
  std::cout<<"Tomorrow date is : ";
  tomorrow.DisplayDate();
  std::cout<<"Decerement tomorrow by one and comapre them\n";
  tomorrow-=1;
  if(today==tomorrow)
    std::cout<<"Tomorrow and today are equal!\n";
  else
    std::cout<<"Tomorrow and today are not equal!\n";
  
  std::cout<<"Increment tomorrow by one to get the original object and comapre them\n";
  tomorrow+=1;
  if(today!=tomorrow)
    std::cout<<"Tomorrow and today are not equal!\n";
  else
    std::cout<<"Tomorrow and today are equal!\n";
  return 0;
}

