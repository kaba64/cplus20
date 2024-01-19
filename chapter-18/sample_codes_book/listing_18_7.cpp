#include <iostream>
#include <list>
#include <string>

template<typename T>
void print(const T &d,const std::string &name){
  if(d.cbegin()==d.cend())
    std::cout<<"The container is empty\n";
  else{
    for(auto iter = d.begin();iter!=d.end();++iter){
      size_t index  = distance(d.begin(),iter);
      std::cout<<name<<" = ["<<index<<"] = "<<*iter<<"\n";
    }
  }
}

class contactItem{
public:
  std::string name;
  std::string phone;
  std::string displayAs;
  contactItem(const std::string nameIn,const std::string phoneIn): name(nameIn),phone(phoneIn){
    displayAs = name+": "+phone;
  }
  // used by list: remove()
  bool operator == (const contactItem& itemCompare)const{
    return (itemCompare.name==this->name);
  }
  // used by list: sort()
  bool operator < (const contactItem& itemCompare)const{
    return (this->name<itemCompare.name);
  }
  operator const char* () const{
    return displayAs.c_str();
  }
};

bool SortOnPhoneNumber(const contactItem& item1,const contactItem& item2){
  return (item1.phone<item2.phone);
}
  
int main(int argc,char *argv[]){
  std::list<contactItem> contacts;
  contacts.push_back(contactItem("Operah Winfery","+1 7889 879 879"));
  contacts.push_back(contactItem("Bill Gates","+1 97 7897 8799 8"));
  contacts.push_back(contactItem("Angi Merkel","+49 23456 5466"));
  contacts.push_back(contactItem("Vlad Putin","+7 6645 4564 797"));
  contacts.push_back(contactItem("John Travolta","+91 234 4564 789"));
  
  std::cout<<"\n";
  std::cout<<"The initial order of the list:\n";
  print(contacts,"contacts");
  std::cout<<"\n";

  std::cout<<"\n";
  std::cout<<"The list after sort() with < operator overloaded in the class:\n";
  contacts.sort();
  print(contacts,"contacts");
  std::cout<<"\n";

  std::cout<<"\n";
  std::cout<<"The list after sort with using phone number (SortOnPhoneNumber):\n";
  contacts.sort(SortOnPhoneNumber);
  print(contacts,"contacts");
  std::cout<<"\n";

  std::cout<<"\n";
  auto iter = contacts.begin();
  std::advance(iter,2);
  std::cout<<"The list after erasing "<<iter->name<<" from the list:\n";
  contacts.remove(contactItem(iter->name,""));
  print(contacts,"contacts");
  std::cout<<"\n";
  
  return 0;
}
