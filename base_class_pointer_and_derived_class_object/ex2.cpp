// base class pointer and object class 
#include<iostream>
using namespace std;
// create the rec class 
class Rectangle {
    // acces modifiers 
    public:
    void area(){
        cout<<"area of rectangle "<<endl;
    }
};

class Cuboid :public Rectangle{
    public:
    void volume (){
        cout<<"volume of coboid" <<endl;
    }
};
// main methods start here ...

int main(){
    //create the object of the class
    Cuboid c;
    //create the  base class pointer 
    Rectangle *r;
    r= &c;
    c.area();
    c.volume();
    // r.volume();// this will gives the error we can't acccess the 
    return  0;
}