// inline function in the cpp
#include<iostream> 
using namespace std;

//creatthe class 
class A {

    public:
    // this is the  inline or member function 
    void in(){
        cout<<"this is the  inline function "<<endl;
    }
    // to make this function inline we can used the inline keywords 
    // inline
     void show();
};

void A::show(){
    cout<< "this  is the non  inline functio"<<endl;
}
int main(){
    //create the object
    A obj1 ;
    // calling the memeber function 
    obj1.in();
    return 0;
}