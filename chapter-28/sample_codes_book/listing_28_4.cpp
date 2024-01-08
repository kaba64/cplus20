#include <iostream>
#include <string>

class ClassA{
private:
  std::string origin;
public:
  ClassA(std::string originIn):
    origin(originIn){std::cout<<"Constructor of ClassA initiated by "<<origin<<" \n";}
  ~ClassA(){std::cout<<"Destructor of ClassA initiated by "<<origin<<" \n";}
};

class ClassB{
private:
  std::string origin;
public:
  ClassB(std::string originIn):
  origin(originIn){std::cout<<"Constructor of ClassB initiated by "<<origin<<" \n";}
  ~ClassB(){std::cout<<"Destructor of ClassB initiated by "<<origin<<" \n";}
};

void funcB(){
  std::cout<<"In funcB\n";
  ClassA a("funcB");
  ClassB b("funcB");
  std::cout<<"The throw keyword is after this line\n";
  throw "Throwing for the heck of it!";
}

void funcA(){
  try{
    std::cout<<"In funcA\n";
    ClassA a("funcA");
    ClassB b("funcA");
    funcB();
    std::cout<<"In funcA, returning to the caller\n";
  }catch(const char* exp){
   std::cout<<"funcA : Exception : "<<exp<<"\n";
   /*Throw the same exeption to the caller of funcA
    so that the catch() block will be searched for it*/
   //throw;
  }
}

int main(int argc,char *argv[]){

  std::cout<<"main() : execution started\n";

  try{
    funcA();
  }catch(const char* exp){
    std::cout<<"main() : Exception : "<<exp<<"\n";
  }
  std::cout<<"main() : exiting gracefully \n";
  return 0;
}
