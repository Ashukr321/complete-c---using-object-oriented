#include <iostream>
using namespace std;

// main method start here ..

int main()
{
    // string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    // cout << cars[0] << endl;
    // cout << cars[1] << endl;
    // cout << cars[2] << endl;
    // cout << cars[3] << endl;
    int myNum[3] = {10, 20, 30};

    cout << myNum[0] << endl;

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++)
    {
        cout << cars[i] << "\n";
    }
    int s = sizeof(cars)/sizeof(string);// this will gives the 5 in output  

    cout << s << endl;
    return 0;
}

// pointer is used to store the address of the data that  is store in the 
// memory 
