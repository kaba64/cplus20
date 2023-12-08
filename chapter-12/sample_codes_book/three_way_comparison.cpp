// The three way comparison introduced in c++20 is overloaded
// for the class Date in this code from Listng 12.8 of the book page 364
// Kazem Bazesefidpar, December 6, 2023

#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <compare>

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
  // The overloaded three way comparison operator
  auto operator <=>(const Date &compareDate) const{
    if(year<compareDate.year)
      return std::strong_ordering::less;
    else if(year>compareDate.year)
      return std::strong_ordering::greater;
    else{ // years are indential, compare month
      if(month<compareDate.month)
	return std::strong_ordering::less;
      else if(month>compareDate.month)
	return std::strong_ordering::greater;
      else{ // months are indential, compare days
	if(day<compareDate.day)
	  return std::strong_ordering::less;
	else if(day>compareDate.day)
	  return std::strong_ordering::greater;
	else{
	  return std::strong_ordering::equal;
	}
      }
    }
  }
  void DisplayDate()const{
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
  }
};


int main(void){

  std::cout<<"Enter a date: mm dd yy (month and day and year should be seperted by a space)\n";
  int day, month,year;
  std::cin>>month>>day>>year;
  Date date1(month,day,year);
  std::cout<<"Enter another date: mm dd yy (month and day and year should be seperted by a space)\n";
  std::cin>>month>>day>>year;
  Date date2(month,day,year);

  auto result = date1<=>date2;

  if(result<0)
    std::cout<<"Date 1 occurs before Date 2\n";
  else if(result>0)
    std::cout<<"Date 1 occurs after Date 2\n";
  else
    std::cout<<"Date 1 are equal Date 2\n";
  return 0;
}

