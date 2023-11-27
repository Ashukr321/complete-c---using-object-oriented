#include<iostream>
#include<string>
using namespace std;

class Rectangle {
    public:
    float length ; // declration + intilaisation
    float breath ; 
   
     static const int  age = 14;
  // constructor 
  // rules  
  // name -> similar to class 
  // no return types // instance variables ke value ko set karne liye
  Rectangle(float length,float breath){
    this->length = length;
    this->breath= breath;
  }
  //inline function , member function 
  static float areaOfRectangle(){
    return 23*4; // * multiply
  }
  
};


// main method  executoin start from main 
int main(){
  // object of reactange 
  Rectangle obj1(13,1023);  // memory => exection context 
  Rectangle obj2(13,2); // 26
  float  ans  = obj2.areaOfRectangle();
  // cout<<ans<<endl;
  cout<<Rectangle::areaOfRectangle()<<endl;// 26
  return 0; 
}


//  creation of the class 
// naming convention of the class
// start capital 

// class 

// blue print hypothetical  , templates 
// object   // this will exits in real 


// data types 
 /*
  int , float -> decimal ,char = 'c' , bool => true , false  , double , long , long- long double 
 
 */


// this keyword , ⭐⭐⭐⭐⭐ only use in non static member fuction 
// current class  
// instance  variables  access -> this keyword



//  Rectangle(float length,float breath){
// (float length,float breath) parameters 


// parameter  and argument 
// parameter 
// value => argument 



// function rules 
// name start small captial -> camel case 

// userName -> cammel case convention 


// static member ⭐⭐⭐



