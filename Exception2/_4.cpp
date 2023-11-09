// rethrow the exception 
#include<iostream>
using namespace std;
int main(){
  int a , b ,int c;
  cout<<"Enter two numbers : ";
  cin>>a >>b ;
  try{
    if(!b==0){
      c=a/b;
      cout<<"result: "<<c;

    }
  }catch(int b){
    cout<<"plz enter the valid input we can't devide  the number by the zero "<<b;
  }
  return 0; 
}