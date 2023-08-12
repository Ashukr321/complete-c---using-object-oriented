// base class pointer and derived class object 

// preprocessor 

#include<iostream> 
using namespace std;
//create the class 
class Base {
    public :    
    void func1();
    void func2();
    void func3();


};


// here we create the derived class 
class Derived : public Base {
    // here we inherit all the properties of  the class 
    //create the  function 
    public:
    void func4();
};
// main methods start here .. 
int main(){
    // create the object of the class 
    Base c1;// this is the static class 
    c1.func1();
    c1.func2();
    c1.func3();
    // create the object of  the class derived 
    Derived c2;
    c2.func4();
    c2.func1();
    c2.func2();
    c2.func3();
    return 0 ;
}

// here we defined all the methods of the class  byt help of the scope resolution 

void Base::func1(){
    cout << " this the func1 "<<endl;
}


void Base:: func2(){
    cout << " this the func2 "<<endl;
}

void Base::func3(){
    cout<<" this is the func3"<<endl;
}

void Derived::func4(){
    cout << " this is the func4 "<<endl;
}