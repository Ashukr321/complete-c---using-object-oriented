// calculate the  sum of the number 1 to n 
#include<iostream>

using namespace std;

// main method start here 
int main(){
    // local variables declration 
    int n ;
    int sum = 0;
    cout<<"enter the number n"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
       sum+=i;
    }
    cout<<"the sum of the enter your number 1 to n : "<<sum <<endl;
    system("pause");
    return 0; 
}