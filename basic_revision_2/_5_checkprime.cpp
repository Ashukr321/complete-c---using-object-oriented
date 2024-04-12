//preprocessor
#include<iostream>
using namespace std;
bool isPrime (int num ){
  if ( num<=1){
    return false;
  }
  for(int i=2 ;i*i<=num;i++ ) {
    if(num%i == 0){
      return  false;
    }
  }
  return true;
}

//main start here ...
int main(){
  int num ;
  cout<<"Enter your number! "<<endl;
  cin>>num;
  // ternary operator
  isPrime(num)?cout << "The number is Prime!":cout<<"The number is not Prime!"<<endl;
  return 0;
}