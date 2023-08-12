// data type in the cpp
#include <iostream>
using namespace std;

// main methods start here
int main()
{
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'D';       // Character
    bool myBoolean = true;     // Boolean
    string myText = "Hello";   // String
    cout << "\nmyNum: ";         // Print out variable name and value
    cout<<myFloatNum<<endl;
    cout<<myDoubleNum<<endl;
    cout<<myLetter<<endl;
    return 0;
}

// boolean	1 byte	Stores true or false values
// char	1 byte	Stores a single character/letter/number, or ASCII values
// int	2 or 4 bytes	Stores whole numbers, without decimals
// float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
// double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits