// protechted access modifiers
#include <iostream>
using namespace std;
class Animal
{
protected:
    int age;
    int weight;

public:
    Animal()
    {
        age = 3;
        weight = 4;
    }
};

// create Dog class
class Dog : public Animal
{
    public:
    void display()
    {
        cout << "Dog is a " << age <<endl<<" years old and weighs " << weight << " kg";
    }
};

int main()
{
    Dog d1;
    d1.display();
    return 0; 
}