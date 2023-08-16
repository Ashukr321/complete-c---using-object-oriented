#include<iostream> 
#include "myPackage.h"
using namespace std;


int main(){
    int a  , b ;

    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
  
    myPackage::Arithmetic obj1;
    obj1.sum(a,b);
    cout<<obj1.sum(a,b)<<endl;

    return 0;   
};

