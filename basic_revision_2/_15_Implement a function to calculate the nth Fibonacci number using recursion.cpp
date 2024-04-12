//preprocessor
#include<iostream>
using namespace std;
int fibonacci (int n ){
  if(n<=1){
    return 1;
  }
  return fibonacci(n-1) + fibonacci(n-2);
}

//main start here ...
int main(){
  // here n is the nth term  or we can say that this is the position  

  int n ; 
  cout<<"enter your nth term !"<<endl;
  cin>>n;
  int nthtermvalue = fibonacci(n);
  cout<<nthtermvalue<<endl;

  return 0;
}