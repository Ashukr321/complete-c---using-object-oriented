// calculate the max element of the vector 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    //create the vector 
    vector<int>v ={3,4,5,5,2,44,3};
    // max_element and min_element are present in the algorithms  

    int min  = *min_element(v.begin(),v.end());
    int max  = *max_element(v.begin(),v.end());
    cout<< "The maximum value is "<<max <<endl ;    
    cout<< "The minimum value is "<<min<<endl ;    
    
    return 0; 
}