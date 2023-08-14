// calculate the area of the square 
#include<iostream>
using namespace std;

int main(){
    cout <<"calculate the area if the square"<<endl;
    // local variables declration 
    float side  , area ;
    cout<<"enter the value of the side "<<endl;
    cin>>side;
    if (side>0) 
    {
        area = side*side;
        cout<<"area of sqaure :> "<<area<<endl;
    }
    else{
        cout << "invalid input"<<endl;
    }
    system("pause");
    return    0; 
}