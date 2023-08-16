#include<iostream>
using namespace std;
int sum (int a ,int b){
   return  a+b;

}

int main(){
    int a  , b ;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    //calling the function 
    cout<<"the sum of the enter your number is "<<sum(a,b)<<endl;
    return 0; 
}