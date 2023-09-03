#include<iostream>
#include<vector>

using namespace std;

int main(){
    //create the vector 
    cout<<"enter the size of the vector"<<endl;
    int size ; 
    cin>>size;
    vector <int>v (size);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    return 0;
}