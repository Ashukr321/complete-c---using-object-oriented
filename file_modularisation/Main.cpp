#include "Rectangle.h"
#include<iostream>
using namespace std;

int main(){

    //create the object of  the Rectangle class 
   Rectangle r (2,3);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}