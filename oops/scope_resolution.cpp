// scope resolution  in the cpp
// here we see the what is the used of the scope resulution in the cpp
// preprocessor
#include <iostream>
using namespace std;

// create the class
class Rectangle
{
    int length, breadth;

public:

    // constructor
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    // accessor
    int getLength();
    int getBreath();

    // mutators
    void setLength();
    void setBreath();

    // facilators
    void area();
    void perimeter();
    bool isSquare();

    // destructors 
    ~Rectangle();
};


// declaration 
Rectangle::Rectangle(){
    length= 3;
    breadth = 5;
}
Rectangle::~Rectangle(){
    cout<< "Rectangle destroyed "<<endl;
}
void Rectangle::area()
{
    cout << length * breadth << endl;
};
// get length
int Rectangle::getLength(){
    return length;
}
// get breath
int Rectangle::getBreath(){
    return breadth;
}



// perimeter
void Rectangle ::perimeter(){
    cout<< 2*(length+breadth);
}

// check it is square or not 

// main methods start here cool

int main()
{
    // create  the  static object
    Rectangle r1;
    r1.area();

    return 0;
}