#include <iostream>
#include <sstream>
#include <string>
class Date{
private:
  int day, month, year;
  std::string dateInstring;
public:
  Date(int monthin,int dayin,int yearin)
  :month(monthin),day(dayin),year(yearin)
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
  /*Concersion operator*/
  explicit operator const char*()
  {
    std::ostringstream formattedDate;
    formattedDate<<month<<"/"<<day<<"/"<<year;
    dateInstring = formattedDate.str();
    return dateInstring.c_str();
  }
  explicit operator int()
  {
    return day+month+year;
  }
  /*End concersion operator*/
  void DisplayDate(){
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
  }
};

auto main() -> int
{
  Date today(8,31,2022);
  std::string strtoday{static_cast<const char*> (today)};
  int inttoday{static_cast<int> (today)};
  //std::cout<<"Today's date is : "<<today<<"\n";
  std::cout<<"Today's date is : "<<strtoday<<"\n";
  std::cout<<"Today's date in Int : "<<inttoday<<"\n";
}

