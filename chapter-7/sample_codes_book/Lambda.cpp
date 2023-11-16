#include <iostream>
#include <algorithm>
#include <vector>

/* Lambda function 
   -> return-type can be ignored
[ capture clause ] (parameters) -> return-type  
{   
   definition of method
}
[&] : capture all external variables by reference 
[=] : capture all external variables by value 
[a, &b] : capture a by value and b by reference
[ ] can only access variables which are local to it.
*/
void printv(int a){
  std::cout <<a<<std::endl;     
}

void Display(std::vector<int> &unsorted){
  //for_each(unsorted.begin(),unsorted.end(),printv); // for_each with the function defined above
  for_each(unsorted.begin(),unsorted.end(),[](int element){std::cout<<element<<std::endl;});
}

auto main(void) -> int
{
  std::vector<int> unsorted;
  unsorted.push_back(505);
  unsorted.push_back(44);
  unsorted.push_back(-5);
  unsorted.push_back(44.7);
  std::cout<<"Unsorted vector is : "<<std::endl;
  Display(unsorted);
  std::cout<<"Sorting the vector is desceding order: "<<std::endl;
  std::sort(unsorted.begin(),unsorted.end(),[](int num1, int num2){return (num2<num1);});
  Display(unsorted);
}
