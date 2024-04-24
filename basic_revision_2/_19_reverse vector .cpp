//preprocessor
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


//main start here ...
int main(){
  vector<int> arr = {1,2,4,5,6};
  reverse(arr.begin(),arr.end());
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
}