#include<iostream>
using namespace std;
class Complex{
  public:
  double real ;
  double imag;

  //create the constructor 
  Complex (double r , double i){
    real = r;
    imag = i;
  }

  // operator overloading 
  Complex operator+(Complex & obj){
    return Complex(real+obj.real,imag+obj.imag);
  }
  // display 
  void display (){
    cout<<"("<<real<<"+"<<imag<<"i"<<")";
  }
};


int main(){
  Complex c1(123,1);
  Complex c2(133,3);
  Complex c3 = c1+c2;
  c3.display();
  return 0;
}