// print the fibonnacci series number
#include <iostream>
using namespace std;

// main method start here ..

int main()
{
    // declare the variables
    int a = 0, b = 1, sum = 0, n;
    cout << "Enter how many terms you want to display : "<<endl;
    cin >> n;
    cout << a << endl;
    cout << b << endl;
    while (b < n)
    {
        sum = a + b;
        a = b;
        b = sum;
        if (b > n)
        {
            break;
        }
        cout << sum << endl;
    }
    system("pause");
    return 0;
}