// for loop

// preprocessor

#include <iostream>
using namespace std;

// main method start
int main()
{
    int n = 20;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }

    cout << "print the number in reverse order" << endl;

    for (int i = n; i >= 0; i--)
    {
        cout << i << endl;

        // apply some condition
        if(i<10){
            continue;
        }
    }

    return 0;
}