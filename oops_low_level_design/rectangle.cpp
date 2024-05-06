#include<iostream>
using namespace std;


class Rectangle{
    private :
    int length;
    int breadth;
    public:
    // create the constructor 
    Rectangle (int l , int b){
        this->length = l;
        this->breadth= b;

    }

    void area(){
        cout<<"area of the rectangle "<<length*breadth<<endl;
    }
    
};
// main here 
int main(){
    Rectangle r1(5,6);   // creating an object with values 5 and 6 for its parameters.
    // calling the area function 
    r1.area();
    return  0; 
}