// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[],int low ,int high , int target){
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]<target){
      return binarySearch(arr,mid+1,high,target);
    }else{
      return binarySearch(arr,low,mid-1,target);
    }
  }
  return -1;
}
// main start here ...
int main()
{
  int size;
  int target;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }


  int low = 0;
  int high  =  size - 1;
  cout<<"Enter the target element :"<<endl;
  cin>>target;
  int targetIndex = binarySearch( arr, low ,  high,  target);
  if(target!=-1){
    cout<<"Target element found at index "<<targetIndex<<endl;
  }else{
    cout<<"Target element not found"<<endl;
  }


  return 0;
}