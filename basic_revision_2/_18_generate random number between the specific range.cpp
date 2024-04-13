//preprocessor
#include<iostream>
#include<random>
using namespace std;


//main start here ...
int main(){
  
  int min , max;
  cout<<"Enter your min value :"<<endl;
  cin>>min;
  cout<<"Enter your max value :"<<endl;
  cin>>max;
  // random engine 
  random_device rd;
  mt19937 get(rd());
  uniform_int_distribution<int> dist(min,max);
  int random = dist(get);
  cout<<"random value between "<<min<<" | " <<max <<" : "<<random<<endl;
  cout<<endl;
  return 0;
}