#include <ctime>
#include <iostream>

class Date{
private:
  int day, month, year;
public:
  Date(int monthin,int dayin,int yearin)
    :day(dayin),month(monthin),year(yearin)
  {
  
  }
  Date operator ++() //prefix increment
  {
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
  Date operator ++(int) //postfix increment
  {
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
  Date operator --() //prefix decrement
  {
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
  Date operator --(int) //post decrement 
  {
    Date copy(day,month,year);
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
    return copy;
  }
  void DisplayDate(){
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
  }
};

auto main() -> int
{
  // get today's date
  time_t t = time(0);   // get time now
  struct tm * today_d = localtime( & t );
  
  Date today(today_d->tm_mon,today_d->tm_mday,today_d->tm_year+1900); /* input formate : m/d/y*/
  today.DisplayDate();
  (++today).DisplayDate();

  Date lastdayofyear(12,31,2022);
  lastdayofyear.DisplayDate();
  (++lastdayofyear).DisplayDate();

  Date oneday(6,30,2022);
  oneday.DisplayDate();
  (++oneday).DisplayDate();

  Date firstdayofyear(1,1,2022);
  firstdayofyear.DisplayDate();
  (--firstdayofyear).DisplayDate();

  Date aday(4,30,2022);
  aday.DisplayDate();
  (--aday).DisplayDate();

  std::cout<<"Post increment : \n";
  Date postincrement(8,28,2022);
  postincrement++.DisplayDate();
  postincrement.DisplayDate();
}

