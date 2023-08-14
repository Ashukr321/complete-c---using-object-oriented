// calculate the sum of the number in intervals
#include <iostream>
using namespace std;

// main method start here

int main()
{
    // declare the local variables
    int n;
    int sum = 0;
    cout << "enter  your number " << endl;
    cin >> n;
    for (int i = 0; i <= n; i + 2)
    {
        sum += i;
    }

    cout << " the sum of number in iterables " << sum << endl;

    return 0;
}