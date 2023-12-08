#include <iostream>
#include <sstream>
#include <string>
#include <ctime>

using namespace std;

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
  void DisplayDate(){
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
  }
};


int main(void){
  // get today's date
  time_t t;   // get time now
  time(&t);
  struct tm * today_d = localtime( & t );
  
  Date today(today_d->tm_mon+1,today_d->tm_mday,today_d->tm_year+1900); /* input formate : m/d/y*/
  std::cout<<"Today date is : ";
  today.DisplayDate();

  today+=7;
  std::cout<<"The date a week later is: ";
  today.DisplayDate();

  return 0;
}

