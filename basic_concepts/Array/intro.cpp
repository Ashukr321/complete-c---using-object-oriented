// array 
#include<iostream>
using namespace std;


// main methods start here 

int main(){
    string name[3];
    name[0]= "Ashutosh kumar";
    name[1]= "Ankit";
    name[2]= "rahul";

    for (int i = 0; i < name->length(); i++)
    {
        cout << name[i]<<endl;
    }
    
    return 0; 
}