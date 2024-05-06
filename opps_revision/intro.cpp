//preprocessor
#include<iostream>
using namespace std;

 class  Car { 
   public:
   string brand; 
   int year; 

   // create the constructor 
   // constructor name must be the same as the class name 
   Car(string  name, int year ){
    this->brand= name;
    this->year = year;
   }

   // create the member function 
   // that function that created inside the class know as the member functin 
   void dispalyInfo(){
    cout<<"Brand: "<< this->brand<<", year : "<< this->year<<endl;
   }

 };

//main start here ...
int main(){

  // create the object of the class
   Car myCar("bmw",2024);
   // call the member function by the help of the class 
   myCar.dispalyInfo();
  
  return 0;
}

/*
  class in the cpp 
   access  modifiers  -> public  private and protected 
   member function  => function that  defined within the class know as member function 
   inline function -> inline function is defined by the help of the inline keywords 

*/