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
  /*End conversion operator*/
  friend ostream & operator << (ostream &out, const Date &date_in);
  // binary add, there is one input since it works on the attributes of the class
  Date operator + (int dayToAdd){
    Date newDate(month,day,year);
    for(int i=dayToAdd;i>0;--i) // use prefix increment dayToAdd times
      ++newDate;
    return newDate;
  }
  // binary subtraction, here is one input since it works on the attributes of the class
  Date operator - (int daySubtract){
    Date newDate(month,day,year);
    for(int i=daySubtract;i>0;--i) // use prefix decrement dayToAdd times
      --newDate;
    return newDate;
  }
  void DisplayDate(){
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
  }
};

ostream & operator << (ostream &out, const Date &date_in){
  out <<date_in.month<<"/"<<date_in.day<<"/"<<date_in.year;
  return out;
}

int main(void){
  // get today's date
  time_t t;   // get time now
  time(&t);
  struct tm * today_d = localtime( & t );
  
  Date today(today_d->tm_mon+1,today_d->tm_mday,today_d->tm_year+1900); /* input formate : m/d/y*/
  std::cout<<"Today date is : ";
  today.DisplayDate();

  Date AWeekAgo(today-7);
  std::cout<<"The date a week ago was: ";
  AWeekAgo.DisplayDate();

  Date AWeeklater(today+7);
  std::cout<<"The date a week later is: ";
  AWeeklater.DisplayDate();

  return 0;
}

