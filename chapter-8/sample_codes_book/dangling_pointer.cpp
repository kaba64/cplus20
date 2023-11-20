#include <iostream>

auto main(void) -> int
{
  std::cout<<"Is it sunny today?\n";
  char userInput = 'y';
  std::cin>>userInput;

  // invalid declarition of isSunny
  //bool* const isSunny = NULL;
                                /*will cause compile error if not initilaized to NULL
				  It cause run time error if it is initilaized to 
				  NULL without pointing to a valid memory loction*/
  // declare pointer and initialize
  bool* const isSunny = new bool;
  *isSunny = true;

  if(userInput == 'n')
    *isSunny = false;

  std::cout<<"Boolean flg sunny says: "<<*isSunny<<std::endl;

  // relese the valid memory
  delete isSunny;
}
