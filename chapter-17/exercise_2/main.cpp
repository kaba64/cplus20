#include <iostream>
#include <vector>
#include <exception>

int main(int argc,char *argv[]){

  std::vector<int> integerInput;
  
  std::cout<<"Please enter an integer numbers\n";
  int input{0};

  while(std::cin>>input){
    
    integerInput.push_back(static_cast<int>(input));

    std::cout<<"\nDo you want to check a data stored: Y or N\n";
    char check;
    std::cin>>check;
    if(check=='Y'){
      std::cout<<"\nPlease enter the index\n";
      int index;
      std::cin>>index;
      try{
	std::cout<<"\ndata["<<index<<"] = "<<integerInput.at(index)<<"\n";
      }catch(const std::out_of_range& exp){
	std::cout<<exp.what()<<"\n";
      }
    }
    std::cout<<"\nPlease enter the next integer numbers; otherwise, type \"exit\"\n";
  }
  return 0;
}
