#include<iostream>
using namespace std;
class Rectangle {
    public:
   static int area (int a ,int b){
   return  a*b;
   }
    static int perimeter(int l ,int b){
        return 2*(l+b);
    };
};

int main(){
    int l  , b ;

    
    cout<<"enter the value of length"<<endl;
    cin>>l;
    cout<<"enter the value of breadth"<<endl;
    cin>>b;
    cout<<"the area of the enter your number is "<<Rectangle::area(l,b)<<endl;
    cout<<"the perimeter of the enter your number is "<<Rectangle::perimeter(l,b)<<endl;
    return 0; 
}