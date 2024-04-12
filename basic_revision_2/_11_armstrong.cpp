//preprocessor
#include<iostream>
#include<cmath>
using namespace std;

int countDigitis ( int num ){
  int count =0; 
  while (num!=0)
  {
     num= num/10;
     count++;
  }
  return count;
  
}

bool isArmstrong(int num ){
  int sum = 0; 
  int originalNumber = num ; 
  int digits = countDigitis(num);
  while (num!=0)
  {
    int digit = num % 10;
    sum  += pow(digit,digits);
    num =  num/10;
  }
  
  return sum == originalNumber;
  
}
//main start here ...
int main(){
  int num ; 
  cout<<"Enter your numner ! "<<endl; 
  cin>>num;
  
  if(isArmstrong(num)){
    cout << num << " is an Armstrong"<<endl;
  }
  else{
    cout<<"Enter your number is not a armstrong number ! "<<endl;
  }
  return 0;
}