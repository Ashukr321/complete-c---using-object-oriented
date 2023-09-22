// here we see the local class in the cpp
// class defined inside the function that is the kno as local class
// local class can only have non instance variabbles

// the accessibility of the local class within that function we can't access outside the function
//  if we declare mulitple class then all class are inherit to each others

#include <iostream>

using namespace std;
// create a function
void func(int n )
{
    // create a class
    class Add
    {
        int a, b;

    public:
        // create constructor
        Add(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        Add();
        int add()
        {
            return a + b;
        }
        void print(int n){
           for(int i = 0; i<n; i++){
            cout<<i<<endl;
           }
        }
        ~Add()
        {
            cout << "destructor is called " << endl;
        }
    };

    Add ad(34, 3);
    ad.print(n);
    cout << ad.add() << endl;
};

int main()
{
    int n =5;
    // call the function
    func(n);
    return 0;
}