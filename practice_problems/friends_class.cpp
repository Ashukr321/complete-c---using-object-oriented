// friends class in the cpp
#include <iostream>
using namespace std;

// create the class ;
class Add
{

    int x, y;
    public:
    // create the constructor 
    Add(int i, int j)
    {
        x = i;
        y = j;
    }

    // create the friends class
    friend class A;

};
// class add 

