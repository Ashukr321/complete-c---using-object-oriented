// here we see the find and sort methods in the  cpp 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //create the vector 
    vector <int> v = {3,2,5,353,24,32,26,2};
    cout << "The original array is : ";
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    
    cout<<endl;
    // sort vector
    sort(v.begin(),v.end());
    cout<<"after sorting the vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0; 
}

