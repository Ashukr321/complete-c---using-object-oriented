// constructor overloading in the cpp
#include <iostream>
#include<math.h>
using namespace std;

// create the class of the  cuboid
class Cuboid
{
    int length;
    int breadth;
    int height;

public:
    // defalut constructor
    Cuboid()
    {
        this->length = 5.0;
        this->breadth = 5.0;
        this->height = 5.0;
    }

    // parameterized constructor
    Cuboid(double l, double b, double h)
    {
        this->length = l;
        this->breadth = b;
        this->height = h;
    }

    // take 2 parameter  l and b ;
    Cuboid(double l, double b)
    {
        // set the default value of h
        this->height = 5.0;
        this->length = l;
        this->breadth = b;
    }

    // take two parameter l an h
    // Cuboid(double l,int b = 5.0,double h)
    // {
    //     // set the default value of h
    //     this->breadth =b;
    //     this->length = l;
    //     this->height = h;
    // }

    // // take two parameter l an h
    // Cuboid(double b, double h)
    // {
    //     // set the default value of h
    //     this->length = 5.0;
    //     this->breadth = b;
    //     this->height = h;
    // }

    // take alol the  parameter in the int and do typcast
    Cuboid(int l, int b, int h)
    {
        this->length = (double)l;
        this->breadth = (double)b;
        this->height = (double)h;
    }

    // take 1 as interger
    Cuboid(double l, double b, int h)
    {
        this->length = l;
        this->breadth = b;
        this->height = (double)h;
    }

    // take 2 as a interger
    Cuboid(double l, int b, int h)
    {
        this->length = l;
        this->breadth = (double)b;
        // here we type cast the data into the double
        this->height = (double)h;
    }



    // operations on cuboid 

    double volume (){
        return(this -> length * this -> breadth* this -> height);
    }
     double surfaceArea(){
        return ((2*((this -> length) * (this -> breadth))+(2 *(this -> breadth)* (this -> height))+(2 *(this -> length)* (this -> height))));
    }
    double Diagonal(){
        return sqrt(pow(length,2)+pow(breadth,2)+pow(height,2));
    }
};

// 
int main(){
    Cuboid obj(4.2,4.3,4.3);
    Cuboid obj2(4.4,4,4);

    cout<<"one"<<endl;
    cout<<obj.volume()<<endl;
    cout<<obj.Diagonal()<<endl;
    cout<<obj.surfaceArea()<<endl;

    cout<<endl;
    cout<<obj2.Diagonal()<<endl;
    cout<<obj2.surfaceArea()<<endl;
    cout<<obj2.volume()<<endl;
    return 0; 
}