// calculate the max element of the vector 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    //create the vector 
    vector<int>v ={3,4,5,50,2,44,3};
  
  int max  = *max_element(v.begin(), v.end());
  int min = *min_element(v.begin(), v.end());
  cout<<"maximum number "<<max<<endl;
  cout<<"minimum number "<<min<<endl;
     
    return 0; 
}