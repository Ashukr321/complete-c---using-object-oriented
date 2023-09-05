#include<iostream>
using namespace std;

//class Animal 
class Animal {
    int age ;
    int weight ;
    public:
    Animal(){
        this->age= 33;
        this->weight = 4;
    };
    friend class  Dog ;
    
    
};
class Dog{
    public:
    void display(Animal &t){
        cout<< "Dog's Age is "<< t.age <<endl<<"Dog's Weight is "<< t.weight << endl;
    }
};

// main start 

int main(){
    Animal a1;
    Dog d1;

    d1.display(a1);
    return 0;
}