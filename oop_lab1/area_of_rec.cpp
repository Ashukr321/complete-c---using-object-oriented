// here we calculate the area of the react 
// preprocessor 
#include<iostream> 
using namespace std;

// main methods start 
int main(){
    float l , b ,area;
    cout<<"enter  size of the length"<<endl;
    cin>>l;

    cout<<"enter area of the breadth"<<endl;
    cin>>b;

    if (l>0&&b>0)
    {
        area = l*b;
        cout<<"area of the reactangle is => "<<area<<endl;
    }else{
        cout<<" length and breadth of the ractangle is can't be negative"<<endl;
    }
    
    // system("stop");
    return 0;
}