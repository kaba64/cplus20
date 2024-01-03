#include <iostream>
#include <vector>

int main(int argc,char *agrv[]){

  std::vector<int> integers{1,2,3,4,5};

  // ::cbegin() method : constant iterator pointing to the beginning of the vector
  std::cout<<"\nBefore changing an element\n\n";
  for(std::vector<int>::const_iterator it = integers.cbegin();it != integers.cend();++it){
    size_t index = distance(integers.cbegin(),it); 
    std::cout<<"integers = ["<<index<<"] = "<<*it<<"\n";
  }

  // change one element with ::at() method, it does bound checking
  //integers.at(10) = 100; will throw run time error (out of range)
  integers.at(2) = 100;
  
  std::cout<<"\nAfter changing an element\n\n";
  for(std::vector<int>::iterator it = integers.begin();it != integers.end();++it){
    size_t index = distance(integers.begin(),it);
    std::cout<<"integers = ["<<index<<"] = "<<*it<<"\n";
  }
}
