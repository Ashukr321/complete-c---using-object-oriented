#include <iostream>
using namespace std;
class Number
{
public:
  int a;
  //constructor 
  Number(){};
  Number(int a){
    this->a = a;

  };

  // post increment overloading 
  void operator ++(int){
    this->a = this->a+3;
  };

};
 int main()
{

  //create the object of the class  Number 
  Number  n1(2);
  cout<<"before post increment"<<endl;
  cout<<n1.a<<endl;
  n1++;
  cout<<"after post increment"<<endl;
  cout<<n1.a<<endl;
  
  return 0;
}