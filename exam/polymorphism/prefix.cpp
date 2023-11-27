#include<iostream>
using namespace std;

class Number{
  public:
  int a ;
  Number (){};
  Number(int a){
    this->a= a;
  }
  void operator++(){
     this->   a =  this->a+5;
  }

  
};
int main(){
  Number n1(23);
   ++n1;
  cout<<n1.a<<endl;
  return 0; 
}