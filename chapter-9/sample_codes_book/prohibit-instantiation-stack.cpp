#include <iostream>
#include <string>

class FreeSpaceClass{
private:
  ~FreeSpaceClass(){std::cout<<"In destructor\n";}
  std::string name;
public:
  FreeSpaceClass(std::string namein)
    :name(namein){std::cout<<"In constructor\n";}
  void print()const{std::cout<<name<<"\n";}
  static void DestroyInstance(FreeSpaceClass* PInstance){std::cout<<"In DestroyInstance function\n";delete PInstance;}
};

auto main() ->int
{
  /* It will produce error since destructor of the class is private
     and we should make the variable on the free space by new */

  //FreeSpaceClass me{"kazem Bazesefidpar"};

  FreeSpaceClass* me = new FreeSpaceClass{"kazem Bazesefidpar"};
  me->print();
  FreeSpaceClass::DestroyInstance(me);
}
