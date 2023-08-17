// calculte the qudratic equation
#include <iostream>
#include <math.h>
using namespace std;


class QuadraticEquation
{
    double a;
    double b;
    double c;

public:
    // create  the  constructor
    QuadraticEquation(double a, double b, double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        
    }

    // create the function  to calculate the root of the quadratic equation
    double getRoot1()
    {
        return (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    }
    double getRoot2()
    {
        return (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    }

    // create the getter and setter fucntion

    // setter function 
    void setA(double a){
        this -> a=a;

    }
    void setB(double b){
        this->b = b;
    }
    void setC(double c){
        this->c = c;
    }

    // getter function

    double getA()
    {
        return a;
    }

    double getB()
    {
        return b;
    }

    double getC()
    {
        return c;
    }
   
    //create the destructor  
    ~QuadraticEquation(){
        cout<<"object is destroyed ! 😎";
    }
};

//😎😎⭐⭐⭐⭐⭐ main method start here 

int main()
{

    // declare the local variables 
    int a , b , c;
    cout<<"enter the value of the a "<<endl;
    cin>>a;
    cout<<"enter the value of the b "<<endl;
    cin>>b;
    cout<<"enter the value of the c "<<endl;
    cin>>c;

    //create the object of the class QuadraticEquation
    QuadraticEquation qe(a,b,c);
    cout<<qe.getRoot1()<<endl;
    cout<<qe.getRoot2()<<endl;

    return 0;
}
