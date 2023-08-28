//Write a program to initialize two integer variables using parameterized 
//constructor and add them. 


// preprocessor 
#include<iostream>
using namespace std;

//creat the class 
class Add {
    int x , y ,z;
    public:
    Add(int ,int );
    void calculated(void);
    void display(void);
};


// initialisation of the inline function  by the help of the scope resolution 
 
 Add::Add(int a , int b){
    this->x =a;
    this->y = b;

 }

 void Add::calculated(void){
    z = x+y;
 }
 void Add::display(void){
    cout<<"the sum of the enter your number is :  "<<z<<endl;
 }

 //main method 
int main(){
     int a, b ;
     cout<< "enter your first number"<<endl;
     cin>>a;
     cout<<"enter your 2nd number "<<endl;
     cin>>b;
     //create object

     Add m(a,b);
     //calling the function 
     m.calculated();
     m.display();
    return 0; 
    
}