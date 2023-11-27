// function overloading 

// function name same 
// return type , number of parameters diffrent 

#include<iostream>
using namespace std;

class A {
  public:
  void add(int a, int b ){
    cout<<a+b<<"\n";
    
  }
  void add(int a, int b , int c){
    cout<<a+b+c;
  }
  
  
};

int main(){
  A obj;
  obj.add(12,3); 
  // cout<<"\n";
  obj.add(12,3,4);
  return 0;
}