#include <iostream>
using namespace std;


class Complex {
  // instance variable
  //private :
  private:
  float real;
  float imag;

  public:
  Complex(float r , float i){
    real = r; //assignment
    imag = i; 
  }

  // just a function that show the complex number 
  void show(){
    cout<<"("<<real<<"+"<<imag<<"i"<<")"<<endl;
  }

  Complex operator+(Complex &obj){
    return Complex(this->real+obj.real,this->imag+obj.imag);
  }
};

int main()
{

  Complex c1(1,2);
  Complex c2(2, 3);

  Complex c3 = c1+c2;
  c3.show();
  return 0;
}


// :: , . ,.* , ternary , sizeof()