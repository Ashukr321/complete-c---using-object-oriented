//preprocessor
#include<iostream>
using namespace std;


//main start here ...
int main(){
  int num ; int sum = 0; int digit  = 0; 
  cout<<"enter your number "<<endl;
  cin>>num;
  while (num>0){
    digit = num%10;
    sum +=digit;

    //  remove last digit 
    num  = num/10;
  }
  cout<<"the sum of digit : "<<sum<<endl;
  return 0;
}