// preprocessor 
#include<iostream>

using namespace std;

//create the class 

class Rectangle {
    // public  ,private , protected access modifiers in the cpp 

    public:

    int length ; 
    int breath;

    // create  the member function 
     int area(){
        return(length*breath);
    }
   // perimeter 
   int perimeter(){ 
    return 2*(length+breath);
   } 

};
int main(){
    //create the object of the class 
    // static obeject 
    // that is store in the stack memory in the memory 
    // Rectangle r1 =Rectangle();
    Rectangle r1 ; 
    // here we set the value of the data mebers in the class
    // by the help of the class referecnce 
    r1.length=5;
    r1.breath = 34 ;
    
    cout<<r1.area() <<endl;
    cout<<r1.perimeter()<<endl;   
    return 0; 
}