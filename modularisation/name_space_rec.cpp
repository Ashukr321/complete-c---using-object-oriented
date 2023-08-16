#include<iostream>
#include "myRec.h"
using namespace std;

int main(){
    int l  , b ;

    
    cout<<"enter the value of length"<<endl;
    cin>>l;
    cout<<"enter the value of breadth"<<endl;
    cin>>b;
    myRec::Rectangle obj;
    cout<<"the area of the enter your number is "<<obj.area(l,b)<<endl;
    cout<<"the perimeter of the enter your number is "<<obj.perimeter(l,b)<<endl;
    return 0; 
}