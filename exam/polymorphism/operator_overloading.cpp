#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;


    Complex(double r, double i) {
        real= r;
        imag= i;
    }

    Complex operator +( Complex &obj)  {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Display the complex number
    void display() const {
        cout << real << " + " << imag << "i" <<endl;
    }
};


int main() {
    // Creating complex numbers
    Complex c1(2.0, 3.0);
    Complex c2(1.5, 2.5);

    Complex result = c1 + c2;

    // Displaying the result
   cout << "Result: ";
    result.display();

    return 0;
}
