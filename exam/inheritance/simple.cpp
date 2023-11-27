#include<iostream>
using namespace std;

 
// single inheritance 
//  base class 
class  A {
  public:// access modifier  + 
  void add(int a , int b){
      cout<<a+b;
  }
};
// :

// derived class 
class B  : public  A{
  public:
  void multiply (int a , int b){
    cout<<a * b;
  }
};


int main(){
  B obj1;
  obj1.add(132,3); // 135
  return 0; 
}

// access 
// public 
// private 
// protected 