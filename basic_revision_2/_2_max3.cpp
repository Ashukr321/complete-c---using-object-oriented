#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    cout << "You entered: " << a << " " << b << " " << c << endl;
    
    int max_value = a; // Assume a is the maximum initially
    
    if (b > max_value) // Check if b is greater than current max_value
        max_value = b;
    
    if (c > max_value) // Check if c is greater than current max_value
        max_value = c;
    
    cout << "Maximum of the three numbers is: " << max_value << endl;

    int min_value = a; // Assume a is the minimum initially

    if (b < min_value) // Check if b is smaller than current min_value
        min_value = b;

    if (c < min_value) // Check if c is smaller than current min_value
        min_value = c;

    cout << "Minimum of the three numbers is: " << min_value << endl;

    return 0;
}
