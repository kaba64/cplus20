// The less than, less or equal than
// geater than, greater or equal than are overloaded
// for the class Date in this code from Listng 12.7 of the book page 361
// Kazem Bazesefidpar, December 6, 2023

#include <iostream>
#include <sstream>
#include <string>
#include <ctime>

time_t t;   // get time now
inline struct tm * set_date(time_t &t){time(&t);return localtime( & t );}
const struct tm *today_d = set_date(t);

class Date{
private:
  int day, month, year;
  std::string dateInstring;
public:
  Date(int monthin=today_d->tm_mon+1,int dayin=today_d->tm_mday,int yearin=today_d->tm_year+1900)
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
    //std::cout<<"The input argument to the overloaded equality operator is :";
    //compareDate.DisplayDate();
    return (day == compareDate.day && month == compareDate.month && year == compareDate.year);
  }
  // The overloaded inequlity operator
  bool operator !=(const Date &compareDate) const{
    //std::cout<<"The input argument to the overloaded inequality operator is :";
    //compareDate.DisplayDate();
    return !(this->operator ==(compareDate));
  }
  bool operator < (const Date &compareDate) const{
    if(year<compareDate.year)
      return true;
    else if(year==compareDate.year && month<compareDate.month)
      return true;
    else if(year==compareDate.year && month==compareDate.month && day<compareDate.day)
      return true;
    else
      return false;
  }
  bool operator <= (const Date &compareDate) const{
    if(this->operator==(compareDate))
      return true;
    else
      return this->operator<(compareDate);
  }
  bool operator > (const Date &compareDate) const{
    return !(this->operator <(compareDate));
  }
  bool operator >= (const Date &compareDate) const{
    if(this->operator ==(compareDate))
      return true;
    else
      return (this->operator >(compareDate));
  }
  void DisplayDate()const{
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
  }
};


int main(void){
  
  Date today; /* default initilization is today date : m/d/y*/
  Date tomorrow;
  ++tomorrow;
  std::cout<<"Today date is : ";
  today.DisplayDate();
  std::cout<<"Tomorrow date is : ";
  tomorrow.DisplayDate();
  std::cout<<"\nTesting overloaded operator ==: \n";
  if(today==tomorrow)
    std::cout<<"today is equal to tomorrow!\n";
  else
    std::cout<<"today is not equal to tomorrow!\n";
  std::cout<<"\nTesting overloaded operator <=: \n";
  if(today<=tomorrow)
    std::cout<<"today is smaller or equal to tomorrow!\n";
  else
    std::cout<<"today is not smaller or equal to tomorrow!\n";
  std::cout<<"\nTesting overloaded operator >=: \n";
  if(today>=tomorrow)
    std::cout<<"today is larger or equal to tomorrow!\n";
  else
    std::cout<<"today is not larger or equal to tomorrow!\n";
  return 0;
}

