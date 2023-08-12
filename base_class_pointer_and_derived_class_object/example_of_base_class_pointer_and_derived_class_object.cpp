//  base class pointer and derived class object 
#include<iostream>
using namespace std ;
//create the  base class 
class Base {
    // accces modifiers 
    public:
    void func1(){
        cout<<"this is the func1"<<endl;
    }
};
class Derived : public Base{
    public:
    void func2(){
        cout<< "this is the func2"<<endl;
    }
};

// main method start here....

int main(){
    //create the object of the class 
    Derived d;
    Base *p = &d; 
    // *p is the base class pointer and it can be point on the derived class 
    // object 
    // p->func2(); we can't call the base class pointer to derived class 
    // function or methods in the cpp ⭐⭐⭐⭐

    d.func1();
    d.func2();
    return 0; 
}