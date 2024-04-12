//preprocessor
#include<iostream>
using namespace std;

void fibonacci (int n  ){
  int first =0,second = 1,next;
  cout<<"fibonacci  series uo to "<<n<<endl;
  for(int i = 0 ; i<n; i++){
    if(i<=1){
      next = i;
    }
    else {
      next = first+second;
      first = second;
      second  = next;
    }
   cout<<next <<endl;
  }
  cout<<endl;
} 
//main start here ...
int main(){
  int n;
  cout<<"enter your number you want term"<<endl;
  cin>>n;
  fibonacci(n);
  return 0;
}