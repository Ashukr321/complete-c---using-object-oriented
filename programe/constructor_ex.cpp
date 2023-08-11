// here we see the what  is the use of the constrcutor in the cpp 
#include<iostream> 
using namespace std;
//create the class  of the reactangle 
class Rectangle {
    // access modifiers 
    public:
    int length ; 
    int breath ;
    // create the constructor 
    // constructor name must be same as the class name 

    Rectangle (int a, int b){
        length = a;
        breath = b;
    }

    // member function 
    void area (){
        cout<< length*breath<<endl;

    }
    void perimeter(){
        cout<< 2*(length+breath)<<endl;
    }
};
int main(){

    //create the  static object static object store in the 
    // stack of the memory 
    Rectangle r1(2,4);

    // calling the  member function by the  help of the class reference 
    r1.area();
    r1.perimeter();
    return  0 ; 
}