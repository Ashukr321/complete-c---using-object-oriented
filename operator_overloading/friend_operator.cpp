// friends operators
#include <iostream>
using namespace std;

// create the class
class Complex
{
public:
    int real;
    int img;
    
    public:
    Complex(int r=0, int i=0){
        real = r;
        img = i;
    }
    // create the constuctor
    friend Complex operator+(Complex c1, Complex c2);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
};


int main()
{
    //create the object
    Complex c1(23,43);
    Complex c2(2,43);
    Complex c3;
    c3 = c1+c2;
    cout<<c3.real<<endl;    
    cout<<c3.img<<endl;    
    return 0;
}
