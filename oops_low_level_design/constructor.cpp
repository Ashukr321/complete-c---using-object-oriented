// human
#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    int weight;
    Human()
    {
        cout << "default constructor is created " << endl;
    }
    // parameterised constructor
    Human(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
    }
    // constructor overloading
    Human(int age)
    {
        this->age = age;
        cout << "i am inside the parametrised constructor  only passing age" << endl;
    }

    // copy constructor
    Human(const Human &h)
    {
        age = h.age;
        weight = h.weight;
        cout << " i am inside the copy constructor by only passing" << age << weight << endl;
    }

    // inline function 
    void sleep(){
        cout << "he is sleeping "<<endl;

    }
    void eat(){
        cout<<" he is eating"<<endl;
    }
};

//  main methods start 
int main(){
    //create the object of the class
    Human chitti;
    cout<<" i am outside the constructor "<<endl;
    chitti.age= 4;
    chitti.weight = 44;
    Human(33,4);
    Human(34);
    Human kapil = chitti;
    chitti.sleep();
    chitti.eat();
    return 0; 
}