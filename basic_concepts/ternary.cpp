// ternary opeartor 
#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int data = (
        a>34 
        ?a+5:a-2
    );
    cout<<data<<endl;
    return 0; 
}