// https://www.geeksforgeeks.org/static-keyword-cpp/?ref=gcse
// C++ program to demonstrate static
// member function in a class
#include<iostream>
#include<string>

using namespace std;

class GfG
{
private:
  string name;
public:
  // static member function
  static void printMsg()
  {
    cout<<"Welcome to GfG!\n ";//name<<"\n";
  }
  void SetName(string namein){name=namein;}
};

// main function
int main()
{
  GfG me;
  me.SetName("Kazem Bazesefidpar");
  // invoking a static member function
  me.printMsg();
}
