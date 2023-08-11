// pointer to the object in the cpp 
#include<iostream>
using namespace std; 
// create the class of the Rectangle 
class Rectangle {
    public:
    int length; 
    int breath ; 
    // create the  members function 

    public:
    void area(){
        cout <<length*breath<< endl;
    }

    void perimeter(){
        cout<<2*(length+breath)<<endl;
    }

};

int main(){
    //create the pointer object 
    Rectangle *r1  = new Rectangle();
    // here  we used the n  ew keywords to create the object 
    // Every pointer takes 8 bytes of memory in latest compiler. 

    r1->length= 34;
    r1->breath= 2;
    //call the members functin access by the -> 
    r1->area();
    r1->perimeter();
    return 0 ;  
}