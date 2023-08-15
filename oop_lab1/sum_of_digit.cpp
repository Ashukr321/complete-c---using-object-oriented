//calcualte the sum of the digits 
#include<iostream>
using namespace std;

// main method start here  ...

int main(){
    int n ,sum = 0; // local variables 

    cout << "enter your number "<<endl;
    cin >>n;
    while(n != 0){
        sum = sum+n%10;// add the last digit in the sum variables 

        n=n/10 ; //  decrease the  digits by 1 
    }
    cout<<" the sum of digits of  the enter your number: "<<sum<<endl;
    system("pause");
    return 0; 
}