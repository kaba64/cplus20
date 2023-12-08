#include <iostream>
#include <sstream>
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
  // Conversion operator from Date clase to integer
  explicit operator int(){
    return day+month+year;
  }
  friend std::ostream & operator << (std::ostream &out, const Date &date_in);
  /*End conversion operator*/
  void DisplayDate(){
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
  }
};

std::ostream & operator << (std::ostream &out, const Date &date_in){
  out <<date_in.month<<"/"<<date_in.day<<"/"<<date_in.year;
  return out;
}

int main(void){
    
  Date today;
  int inttoday{static_cast<int> (today)};
  std::cout<<"Today's date (using operator overloading) is : "<<today<<"\n";
  std::cout<<"Today's date in Int : "<<inttoday<<"\n";
  return 0;
}

