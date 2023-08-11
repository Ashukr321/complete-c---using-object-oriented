// constructor 
#include<iostream>
using namespace std;

//create the class of the  rectangle 
class Rectangle{
    
    int length;
    int breath;

    //create the constructor and set the value of the data members
    // default constructor is the internally used the method overloading 
    public:
    Rectangle (){
        cout<<" default constructor is created "<<endl;
    }
    // parameterized constructor 
    Rectangle (int a , int b){
        length = a;
        breath = b;
    }
    public:
    // void display 
    void display(){
        cout<<length<<endl;
        cout<<breath<<endl;
    }
};
int main(){
    //create the object // internally the  default constructor is called
    // 
    Rectangle r1;
    Rectangle r2(3,3);
    r2.display();
    return 0;
}