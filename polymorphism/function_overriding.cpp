// here we see the function overriding in the cpp 
#include<iostream> 
using namespace std;

// create the parent class
class  Parent{
    public:
    void display(){
        cout<<"this  is the  parent class"<<endl;
    }
};

// child class 
class Child : public Parent{
    public:
    void display(){
        cout<<"this is the child class "<<endl;
    }
};
// main methods start here 

int main(){
    //create the object of parent clss 
    Parent p ;
    p.display();
    Child c;
    c.display();
    return 0    ;
}