#include<iostream>
using namespace std;

// class keywords -> reserve 
// pascal convention 
class Amity{
  // private  -> access modifier 
  string  name ="amity";//  dec + int; 
  // instacne variable 
  // constructor rules 
  // SAME AS CLASS NAME 
  public:
    Amity(){
       cout<<" amity university patna";
   
    }
    Amity(int a){
       cout<<a;
    }

    // member function  or inline function 
    static void data(){
      cout<<"this is member function ashutosh "  <<endl;
    }

    // dec
    static void func1();
};

void Amity::func1(){
  cout<<"this func1"<<endl;
}


// main methods 
int main(){
  // object 
  Amity obj1;
  cout<<endl;
    
  Amity obj2(12);
  cout<<endl;
  
  // obj1.data();
  Amity::data();
  
  Amity::func1();
  return 0;
}


//  access 
// private     default  -  
// public   +
// protected  # 
// :: scope resolution

// poly  morphism 
// poly -> many 
// morphism -> form 

// 2 types 
// compile time poly. 
      // function overloading 
      // operator overloading  + - * / % 

// run time poly . 
    // virtual function 


