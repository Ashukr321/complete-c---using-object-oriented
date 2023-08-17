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
    double getLength(){
        return length;
    }
     double getBreath(){
        return breadth;
    }

    double area (){
        return length*breadth;
    }
    double perimeter(){
        return 2*(length+breadth);
    }

    ~Rectangle(){
        cout<<"object is destroy ! 🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️😎😎 ";
    }
};

//🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️
int main(){
    double l, b;

    cout<<"enter the value of length "<<endl;
    cin>>l;
    cout<<"\n enter the value of breath"<<endl;
    cin >>b;
    Rectangle obj1;

    //create the object of the clasw
    obj1.setBreath(b);
    obj1.setLength(l);

    cout<<"The area is "<<obj1.area()<<endl;
    cout<<"The perimeter is "<<obj1.perimeter()<<endl;
    
    return 0; 
}