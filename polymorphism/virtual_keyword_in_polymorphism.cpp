// here we see what is the used of hte virtula keywords in the cpp
#include<iostream>
using namespace std;
//create the base class 
class Base {
    public:
  virtual  void display(){
        cout <<"this is  the base class function "<<endl;
    };
};

//create the child class 
class Child:public Base {
    public:
    void display(){
        cout<< "this the child class "<< endl;
    }
};

int main(){
    //  create the base class pointer and derived class object 
    Base *ptr = new Child();
    ptr->display();
    return  0;
}