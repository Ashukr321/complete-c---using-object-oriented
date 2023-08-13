// inner class

#include<iostream>
using namespace std;
//create the outer class
class outer{
    public:
    void fun(){
        i.display();
    }
    public:
    class Inner{
        public:
        void display(){
            cout<<"display of inner class"<<endl;
        }
    };
    Inner i;
};


int main(){

    //create the object of the outer class 
    outer c1;
    c1.fun();
    return 0; 
}