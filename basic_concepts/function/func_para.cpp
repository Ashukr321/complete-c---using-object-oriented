#include <iostream>

using namespace std;
void sum(int a, int b)
{
    cout << a + b << endl;
}
int main()
{
    // calling the function
    sum(2, 3);
    return 0;
}

// With function overloading, multiple functions can have the same name with different parameters: