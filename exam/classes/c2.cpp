#include<iostream>
using namespace std;


class Student {
    // access modifier 
    public:

    string name = "Ashutosh";
    int age = 20;

    // function  -> member function // inline fuction 
    // void   khali 
    void getInfo (){
        // class -> local class ⭐⭐⭐⭐
        class StdData{
            public:
              static void getData(int age , string name){
                cout<<age<<endl;
                cout<<name<<endl;
               }
        };
        
        StdData::getData(age,name);
    }


};

int main(){
  Student ob1;
  ob1.getInfo();
  return 0; 
}