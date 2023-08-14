// calculate the  area of the scalen tianlge 
#include<iostream>
#include<math.h>
using namespace std;

 int main(){
    cout<<"calculate the area of the scalen triangle"<<endl;

    float a,b ,c,S, area  ;
    cout<<"enter the first side of the scalen triangle"<<endl;
    cin>>a;
    cout<<"enter  the 2nd side of the scalen triangle"<<endl;
    cin>>b;
    cout<<"enter the 3rd side of the scalen triangle"<<endl;
    cin>>c;
    if (a<b+c && b<a+c && c<a+b)
    {
        //calculate the  semi perimeter 
        S = (a+b+c)/2;
        area = sqrt(S * (S - a) * (S - b) * (S - c));
        cout<<"the area of the scalen triangle  => "<<area<<endl;
        
    }else{
        cout<<"enter the valid input "<<endl;

    }
    
    system("pause");
    return 0; 
 }