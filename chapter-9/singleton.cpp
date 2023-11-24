#include <iostream>
#include <string>

class President{
private:
  President(){std::cout<<"In default constructor\n";};
  President(const President&){std::cout<<"In copy constructor\n";};
  const President& operator=(const President&){std::cout<<"In assignment operator\n";};

  std::string name;
public:
  static President& GetInstance()
  {
    static President onlyInstance;
    std::cout<<"In the static function\n";
    return onlyInstance;
  }
  std::string GetNmae()const {std::cout<<"In GetName function\n";return name;}
  void SetName(const std::string namein){name=namein;}
};

auto main() -> int
{
  President& onlyPresident = President::GetInstance();
  onlyPresident.SetName("Abraham Lincoln");
  President& secondPresident = President::GetInstance();
  //President second;   /*Gives error since the default constructor is private!*/
  std::string name_fp = President::GetInstance().GetNmae();
  std::string name_sp = secondPresident.GetNmae();
  std::cout<<"The name of the president is "<<name_fp<<"\n";
  std::cout<<"The name of the president is "<<name_sp<<"\n";
}
