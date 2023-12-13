#include <iostream>
#include <algorithm>

template<typename T1, typename T2>

class Array{
private:
  int size1,size2;
  T1 * arry1;
  T2 * arry2;
public:
  Array(int size1In = 10,int size2In = 10)
    :size1(size1In),size2(size2In){
    std::cout<<"Constructor of the class\n";
    arry1 = new T1[size1];
    arry2 = new T2[size2];
  }
  Array(Array & src){
    std::cout<<"Copy constructor of the class\n";
    size1 = src.size1;
    size2 = src.size2;
    arry1 = new T1[size1];
    arry2 = new T2[size2];
    std::copy(src.arry1,src.arry1+size1,arry1);
    std::copy(src.arry2,src.arry2+size2,arry2);
  }
  void SetElements(const T1 val1,const T2 val2){
    for(int i=0;i<size1;++i){arry1[i] = i*val1;}
    for(int i=0;i<size2;++i){arry2[i] = i*val2;}
  }
  void Display()const{
    std::cout<<"Array_1 has the size of "<<size1<<", and its elements are :\n";
    for(int i=0;i<size1;++i){std::cout<<"Array["<<i<<"] = "<<arry1[i]<<"\n";}
    std::cout<<"Array_2 has the size of "<<size2<<", and its elements are :\n";
    for(int i=0;i<size2;++i){std::cout<<"Array["<<i<<"] = "<<arry2[i]<<"\n";}
  }
  virtual ~Array(){
    std::cout<<"Destructor of the class\n";
    delete [] arry1;
    delete [] arry2;
  }
};

int main(int argc,char *argv[]){

  Array<double,double> arrayDoubDoub;
  arrayDoubDoub.SetElements(1.0,2.0);
  arrayDoubDoub.Display();
  return 0;
}
