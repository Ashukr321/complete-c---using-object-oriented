// Write a C++ program to calculate the factorial of a number using a recursive function..
//preprocessor
#include<iostream>
using namespace std;

int factorial (int n ){
  
  if(n == 0) {
    return 1;
  }
  return  n* factorial(n-1);
  
}

//main start here ...
int main(){
    int n  ;
    cout<<"Enter your number  :  "<<endl;
    cin>>n;
    int fact = factorial(n);
    cout<<"factorial of Enter your Number :"<<n <<": "<< fact<<endl;
  return 0;
}