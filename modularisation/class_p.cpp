#include<iostream> 
using namespace std;
//create the class rectangle 
class Rectangle {

    double length ; 
    double breadth ; 

    public: 

    Rectangle(){
        this->length = 1.0;
        this->breadth = 1.0;
        cout << "Default constructor called" << endl;
    }

    Rectangle (double length,double breadth){
        this->length = length ;
        this->breadth=breadth ;
    }
    // setter function 
    void setLength(double length){
        this->length = length;
    }
    
    void setBreath(double length){
        this->breadth = breadth;  
    }

    //getter length 
    int getLength(){
        return length;
    }
     int getBreath(){
        return breadth;
    }

    ~Rectangle(){
        cout<<"object is destroy ! 🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️😎😎 ";
    }
};

//🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️
int main(){
    //create the object of the clasw
    Rectangle obj1(3,4);
    obj1.setBreath(3);
    obj1.setBreath(3);
    cout<<"The area is "<<obj1.getLength()*obj1.getBreath()<<endl;
    
    return 0; 
}