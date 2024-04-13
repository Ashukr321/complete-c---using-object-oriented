//preprocessor
#include<iostream>
#include<Algorithm>
#include<vector>
#include<climits>
using namespace std;

int SecondLargestNumber ( vector<int>&nums){
  int max1 = INT_MIN; //  maximum largest number 
  int max2 = INT_MIN;// 2nd maximum largest number 
  for(int num :nums){
    if(num>max1){
        max2=max1;
        max1=num;
    }else  if(num>max2 && num!=max1){
      max2 = num;
    }

  }
  return max2;
}

//main start here ...
int main(){
  vector<int> v = {1,24,1,4,1,42,21,4,124,215,35};
  int  maxelement = SecondLargestNumber(v);
  cout<<maxelement<<endl;
  
  return 0;
}