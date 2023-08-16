#include<iostream>
using namespace std;
class Arithmetic {
    public:
   static int sum (int a ,int b){
   return  a+b;

}
};

int main(){
    int a  , b ;

    
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"the sum of the enter your number is "<<Arithmetic::sum(a,b)<<endl;
    return 0; 
}