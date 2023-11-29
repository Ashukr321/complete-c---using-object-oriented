// function overloading 
// // preprocessor 
#include<iostream>
using namespace std;

class Number{
    // instance member or variables  //attributes 
 // 3 
  // public  + 
  // private  - 
  // protected #


    public:
    // member function  or inline function
    void sum(int a , int b){
        cout<<a+b;
        cout<<endl;
        cout<<"one"<<endl;
    }
  
    void sum (double a , int b){
      cout<<a+b;
      cout<<endl;
        cout<<"two"<<endl;
    }

    void sum (int a , double b){
      cout<<a+b;
        cout<<"three"<<endl;
      
    }
    void sum (float a , float b, float c){
      cout<<a+b;
      cout<<endl;
      cout<<"four"<<endl;
    }

    // declratoin within the class 
    inline void show(int a , int b);
};

// initliasation outside the class  // :: scope 
 void Number::show(int a , int b){
      cout<<a*b<<endl;
      cout<<"this is inline function in the poly";
}


int main(){

  //create the object of the class 
  Number n1;
  n1.sum(23,3);
  n1.sum(23232.34,3);

  n1.sum(2.2,3.5,4.7);
  n1.show(23,2);//this is inline function in the poly
  return 0; 
}
