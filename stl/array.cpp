// array 
#include<bits/stdc++.h>
#include<array>
using namespace std;

int main(){
    array<int,4>a= {3,4,5,5};
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    
}