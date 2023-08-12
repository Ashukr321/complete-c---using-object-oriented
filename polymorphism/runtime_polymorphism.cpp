// here we see the  runtime polymophism
#include <iostream>
using namespace std;
// create the class
class Car
{
public:
    // facilators function
    // pure class function 
    virtual void start() = 0;
    virtual void stop() = 0;
    
};

// create the  inova class
class Inova : public Car
{
public:
    void start()
    {
        cout << "Inova started" << endl;
    }
    void stop()
    {
        cout << "Inova stopped " << endl;
    }
};

class Swift : public Car
{
public:
    void start()
    {
        cout << "Swift started" << endl;
    }
    void stop()
    {
        cout << "Swift stopped " << endl;
    }
};

int main()
{

    // create the base class pointer and derived class object
    // Car *ptr = new Inova();
    Car *ptr = new Swift();
    ptr->start();
    ptr->stop();
    return 0;
}