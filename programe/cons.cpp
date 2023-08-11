#include<iostream>
using namespace std;


// class is defiendd 

class Rectangle {

    public :
    int l ;
    int b;
    // constructor 
    Rectangle(int a,int bn ){
        l = a ;
        b = bn;
    }

   void area(){
    int area = l*b;
    cout<<area<<endl;
   }

   void perimeter (){
    int peri = 2*(l+b);
    cout<< peri<<endl;  
   }
};

// main method stare here 

int main(){
    // create the obejct 

    Rectangle r1(10,20);
    r1.area();
    r1.perimeter();
    return 0;
}