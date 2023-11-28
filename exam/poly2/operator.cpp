// here we see the compile time polymorphims
// operator overloading in the cpp
#include <iostream>
using namespace std;
// create the complex class
class Complex
{
public:
  float real;
  float imag;
  // create the constructor
  Complex(float r, float i)
  {
    this->real = r;
    this->imag = i;
  }

  // overloading the + operator
  Complex operator+(Complex &obj)
  {
    return Complex(this->real + obj.real, this->imag + obj.imag);
  }

  // display the complext number
  void show()
  {
    cout << "(" << this->real << "+" << this->imag << "i"
         << ")";
  }
};

int main()
{
  // create the object of the class complex
  Complex c1(23, 23);
  Complex c2(3, 3);
  Complex c3 = c1 + c2;
  c3.show();
  return 0;
}