//inheritance in the cpp 
#include<iostream>
using namespace std;
class Base {
    public:
    void display(){
        cout<<"display of base ";
    }
};
// create the another class // here inherit the class base class 

class Derived :public Base{

};

int main(){

    //create the static object 
    Derived b;
    b.display();
    return 0;

}