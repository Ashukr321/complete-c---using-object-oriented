// friends function in the cpp 
#include<iostream>
using namespace std;
// create the class
class Test {
    // access modifiers 
    private :
    int a ;
    protected :
    int b ;
    public:
    int c;
    //we have to create the friends function 
    friend void func();

};

// create the another class
void func(){
    //create the object of  the class Test 
    Test t;
    t.a = 3;
    t.b = 43; 
    //we can't access these all the fuction 

    t.c= 5;

    
    cout<<t.a<<endl;
    cout<<t.b<<endl;
    cout<<t.c <<endl;
};
// main methods start ...
int main(){
    // try to call the function 
    func();
    return 0; 
}