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
  /*Conversion operator*/
  explicit operator const char*()
  {
    std::ostringstream formattedDate;
    formattedDate<<month<<"/"<<day<<"/"<<year;
    dateInstring = formattedDate.str();
   /*The basic_string::c_str() returns a pointer to an array that contains a 
      null-terminated sequence of characters representing the current value of 
      the basic_string object. */
   return dateInstring.c_str();
  }
  explicit operator int()
  {
    return day+month+year;
  }
  friend ostream & operator << (ostream &out, const Date &date_in);
  /*End conversion operator*/
  void DisplayDate(){
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
  }
};

ostream & operator << (ostream &out, const Date &date_in){
  out <<date_in.month<<"/"<<date_in.day<<"/"<<date_in.year;
  return out;
}

auto main() -> int
{
  // get today's date
  time_t t = time(0);   // get time now
  struct tm * today_d = localtime( & t );
  
  Date today(today_d->tm_mon,today_d->tm_mday,today_d->tm_year+1900); /* input formate : m/d/y*/
  /*Since keyword explicit is used, we should 
    use cast to avoid compilation error*/
  std::string strtoday{static_cast<const char*> (today)};
  int inttoday{static_cast<int> (today)};
  std::cout<<"Today's date (using operator overloading) is : "<<today<<"\n";
  std::cout<<"Today's date (using conversion operator) is : "<<strtoday<<"\n";
  std::cout<<"Today's date in Int : "<<inttoday<<"\n";
}

