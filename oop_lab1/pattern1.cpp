// print the loop pattern 
#include<iostream>
using namespace std;

// main methods start 
int main(){
    for (int i = 1; i <=5; i++)
    {
        // inner loop 
        for (int j = 1; j <=i; j++)
        {
          cout<<"*";
        }
        cout<<endl;
        
    }
    system("pause");
    return 0; 
}