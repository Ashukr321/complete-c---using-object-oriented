// here we see the what is the use of the poly morphism
// polmorphism is achived by the two ways

// methods overloading => compile time polymophism
// static polymorphsm

// virtual function ?
// inheritance me use karte hai
//  by the help of the virtual keywords we can
// acheive the polumorphis runtime of the base class methods

// methods overloading

#include <iostream>
using namespace std;
// create the class of the calculator
class Calculator {
    // instance variables 
    public:
    int a ;
    int b;

    // private
    Calculator(int a ,int b){
        this->a= a ;
        this->b=b;
    };

    int sum();
    int sub();
};

// implementations 
int Calculator::sum(){
    return a*b;
}

// sub
int Calculator::sub(){
    return a-b;
}

int main()
{
    // object crration 
    Calculator c1(34,45);
    cout<<c1.sum() <<endl;// call to method sum
    cout<<c1.sub()<<endl;
    return 0;
}