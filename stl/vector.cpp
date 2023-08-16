#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>v){
    // v.size()-> time complexity => 0(1);
    cout<<"size:"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
}

// main methods start here .. 
int main(){
    
    vector<int> v(10,4);    
    v.push_back(2);
    printVec(v);
    v.pop_back();// o (1);
    printVec(v);
    vector <int> v2 = v; // here we directly copy the vector 
    // copy of the vector take 0(n) time complexity 
    
    return 0;
}