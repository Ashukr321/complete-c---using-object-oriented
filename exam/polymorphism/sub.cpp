#include<iostream>
using namespace std;
class Complex {
  public:
  double real ;
  double imag;
  // constructor 
  Complex (double r,double i){
    real = r;
    imag = i;
  }

  //- overload 
  Complex operator-(Complex & obj){
    return Complex(real-obj.real,imag-obj.imag);
  }
  // display  function that display the complex number 
  void display(){
    cout<<"("<<real<<"-"<<imag<<"i"<<")"<<endl;
  }
};


int main(){

  // create the object of the complex number 
  Complex c1(25,2);
  Complex c2 (23,1);
  Complex c3= c1-c2;
  c3.display();
  return 0; 
}