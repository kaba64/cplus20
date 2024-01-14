#include <iostream>
#include <deque>
#include <algorithm>

template<typename T>
void print(const T begin,const T end,const std::string &name){

  for(auto iter = begin;iter!=end;++iter){
    size_t index  = distance(begin,iter);
    std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
  }
}

int main(int argc,char *argv[]){

  std::deque<int> intDeque;
  
  int N{5};
  std::cout<<"Insert "<<N<<" elements in back\n\n";
  for(int i=0;i<N;++i)
    intDeque.push_back(i);
  print(intDeque.begin(),intDeque.end(),"intDeque");

  std::cout<<"\nInsert "<<N<<" elements in front\n\n";
  for(int i=0;i<N;++i)
    intDeque.push_front(i);
  print(intDeque.begin(),intDeque.end(),"intDeque");

  std::cout<<"remove one element from front and one from back\n";
  intDeque.pop_back();
  intDeque.pop_front();
  print(intDeque.begin(),intDeque.end(),"intDeque");

  intDeque.clear();
  if(intDeque.empty())
    std::cout<<"\nThe deque<int> is empty now!\n";
  
  return 0;
}
