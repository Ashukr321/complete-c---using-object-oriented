//preprocessor
#include<iostream>
using namespace std;

int linearSearch ( int arr[],int size , int target){
  for (int i = 0; i < size; i++)
  {
    if(arr[i]==target ){
      return i;
    }
  }
  return -1;
  
}

//main start here ...
int main(){
  int size;
  int target;
  cout<<"Enter the  size of the array :  "<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
     int n ; 
     cout<<"Enter the element at index : "<< i <<endl;cin>>n;
     arr[i] = n;
  }

  cout<<"Enter the target element : "<<endl;
  cin>>target;
  int targetValueIndex = linearSearch(arr,size,target);
  if(targetValueIndex>0){
    cout<<"Target element is found at index : "<<targetValueIndex<<endl;
  }else {
    cout<<"Target element is not found"<<endl;
  }
  return 0;
}