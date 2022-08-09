#include <iostream>

auto main() -> int
{
  char first_letter;
  std::cout<<"Please enter the first letter of the name : "<<"\n";
  std::cin>>first_letter;
  switch(first_letter)
    {
    case 'a':
      std::cout<<"It is the first letter of Ali"<<"\n";
      break;
    case 'j':
      std::cout<<"It is the first letter of Jafer"<<"\n";
      break;
    case 's':
      std::cout<<"It is the first letter of Sadegh"<<"\n";
      break;
    case 'k':
      std::cout<<"It is the first letter of my name (Kazem)"<<"\n";
      break;
    default:
      std::cout<<"It is not considered!"<<"\n";
      break;
    }
}
