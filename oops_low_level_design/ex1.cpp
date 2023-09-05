//  human example
#include<iostream>
using namespace std;

class Human{
    int age;
    int weight ;
    public:
    void sleep(){
        cout<<"He is sleaping "<<endl;

    }
    void eat(){
        cout<<" He is eating"<<endl;
    }
};

int main(){
    //create the static object of the class 
    Human m1;
    m1.eat();
    m1.sleep();
    return 0;
}

// public 
// private 
// protechted 
