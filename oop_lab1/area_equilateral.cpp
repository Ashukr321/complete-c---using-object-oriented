//calculate the area of the equilatral 
#include<iostream>
#include<math.h>

using namespace std;
// main method start here ..

int main(){
    cout<<"calculate the area of the equilateral "<<endl;
    float area,side;
    cout<<"enter the side of the equilateral"<<endl;
    cin>>side;
    if (side>0)
    {
        area = sqrt(3)/4*(side*side);
        cout<<"area of the equilateral triangle => "<<area<<endl;
    }else{
        cout<<"enter valid input"<<endl;
    }
    system("pause");
    return 0; 
}