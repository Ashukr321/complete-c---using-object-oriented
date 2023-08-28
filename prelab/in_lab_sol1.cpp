#include<iostream>
using namespace std ;

//create the class 
class myFirstClass {
    public:
    int a;
    public:
    //create the constructor 
    myFirstClass(int n){
        this->a = n;
    }
    void show(){
        cout<<"factorial of enter your number :"<<factorial(a)<<endl;
        cout<<"isStrong : "<<isStrong(a)<<endl;

    }
    
   static int  factorial (int n){
        if(n==0||n==1){
            return 1;
        }
        return n* factorial(n-1);

    }
    static bool isStrong(int n){
        int factSum  = 0;
        int temp = n;
        while (temp!=0)
        {
           factSum  += factorial(temp%10);
           temp =  temp/10;// decrease the digit of num by 1;

        }
        if(factSum==n){
            return true;
        }else{
            return false;
        }
        
        
    }


};

int main(){
    int n ;
    cout<<"Enter any number : " <<endl;
    cin>>n;
    // create object for that class
    myFirstClass obj(n);
    //calling the fucntion of the class 
    obj.show();
}