#include <iostream>
#include <string>

class President{
private:
  President(){};
  President(const President&);
  const President& operator=(const President&);

  std::string name;
public:
  static President& GetInstance()
  {
    static President onlyInstance;
    return onlyInstance;
  }
  std::string GetNmae(){return name;}
  void SetName(std::string namein){name=namein;}
};

auto main() -> int
{
  President& onlyPresident = President::GetInstance();
  onlyPresident.SetName("Abraham Lincoln");
  President& secondPresident = President::GetInstance();
  President second;
  //std::cout<<"The name of the president is "<<President::GetInstance().GetNmae()<<"\n";
  //std::cout<<"The name of the president is "<<secondPresident.GetNmae()<<"\n";
}
