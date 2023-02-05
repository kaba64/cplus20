// https://www.geeksforgeeks.org/static-keyword-cpp/?ref=gcse
// C++ program to demonstrate static
// variables inside a class

#include<iostream>
using namespace std;

class GfG
{
public:
  static int i;
  GfG()
  {
    // Do nothing
  };
};

int GfG::i = 1;

int main()
{
  GfG obj1;
  GfG obj2;
  // prints value of i
  cout<<"obj1.i = "<<obj1.i<<"\n";
  cout<<"obj2.i = "<<obj2.i<<"\n";
  obj1.i = 5;
  cout<<"obj1.i = "<<obj1.i<<"\n";
  cout<<"obj2.i = "<<obj2.i<<"\n";
}
