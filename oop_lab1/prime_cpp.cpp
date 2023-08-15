// check the the input user number is prime or not 
#include<iostream> 
using namespace std;

// main method start here ...
int main(){
    // declare the local variables 
    int num , j = 0; 
    cout << "Enter a positive integer: ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if ((num%i)==0)
        {
            j++;
        }
        
    }
    if (j==2)
    {
       cout<<" prime number "<<endl;
    }
    else{
        cout<<" not a prime number "<<endl;
    }
    system("pause");
    return 0; 
}