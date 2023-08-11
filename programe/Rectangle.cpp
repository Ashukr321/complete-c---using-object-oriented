#include<iostream>
#include<math.h>rro 
using namespace std; 

class Rectangle {
    public:
    int length ; 
    int breath ; 
    int area(){
        return length*breath;

    }
    int perimeter (){
        return 2*(length+breath);
    }
    float diagonal (){
        return sqrt(pow(length,2)+pow(breath,2));
    }
};
int main(){
    //create the object 
    Rectangle r;
    Rectangle r1;
    r1.length=3;
    r1.breath=4;

    // r.length= 23;
    // r.breath  = 34;
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r1.diagonal();
}