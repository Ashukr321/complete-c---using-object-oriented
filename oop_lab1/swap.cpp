// calculate the swap two number
#include <iostream>
using namespace std;

int main()
{

    cout << " swap two numebr " << endl;
    // declare the two variables
    int a, b;

    cout << "enter the value of the a " << endl;
    cin >> a;
    cout << "enter the value of the b" << endl;
    cin >> b;
        int temp = a;
        a = b;
        b = temp;
        cout << "after swaping the number " << endl;

        cout << a << endl;
        cout << b << endl;

        
    return 0;
}
