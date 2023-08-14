// calculate the area of the circle and perimeter of the circle 
#include<iostream> 
#define PI 3.14
using  namespace std;

int main(){
    cout<<"calculate the area  of the circle and perimter of the circle "<<endl;
    // variables declration 
    float r , area, perimeter;
    cout<<"enter the value of radius"<<endl;
    cin>>r;
    if (r>0)
    {
        area = PI*r*r;
        perimeter = 2*PI*r;
        cout<<"area of the circle is : => "<<area<<endl<<" perimter of the circle  => "<<perimeter<<endl;
    }
    else{
        cout << "invalid input";
    }
    system("pause");
    
    return 0;   
}