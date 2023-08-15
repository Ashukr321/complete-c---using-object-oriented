// calculate the sum of the enter user number by the help of the function 
#include<iostream> 
using namespace std;

// function  inttialisation 
int add(int a, int b) {
    return a+b;
}
int add_four(int a  , int b , int c , int d ){
    return a+b+c+d;
}

// main method start  
int main(){

    // local  variables declration 
    int a , b , c , d ;
    cout<<"enter two number "<<endl;
    cin >>a >>b;
    int sum1 = add(a,b);
    cout<<"enter 4 number "<<endl;
    cin>>a>>b>>c>>d;
    int sum2=add_four (a,b,c,d) ;
    cout<<" the sum of enter your two number is : "<<sum1<<endl;
    cout<<" the sum of enter your  four number is : "<<sum2<<endl;

    return 0; 
}