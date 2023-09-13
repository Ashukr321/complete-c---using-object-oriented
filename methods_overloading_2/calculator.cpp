// create the calculator by using the concepts of the mehtods overloading

#include <iostream>
using namespace std;

// create the class of the calculator
class Calculator
{
    // create the function and do overloading
public: 
    
    int add(int a, int b)
    {

        return a + b;
    }

    int addDouble(double a, double b)
    {
        return a + b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }
    int dMultiply(double a, double b){
        return a*b;
    }
};
int main()
{
    // create the object of the  class
    Calculator c;

    cout << c.add(3, 4) << endl;
    cout << c.addDouble(34.34, 553.3) << endl;


    return 0;
}