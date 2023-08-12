#include <iostream>
using namespace std;

int main()
{
    if (20 != 18)
    {
        cout << "20 is greater than 18";
    }else{
        cout<<"noting"<<endl;
    }
    return 0;
}

// Less than: a < b
// Less than or equal to: a <= b
// Greater than: a > b
// Greater than or equal to: a >= b
// Equal to a == b
// Not Equal to: a != b
// You can use these conditions to perform different actions for different decisions.

// C++ has the following conditional statements:

// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use switch to specify many alternative blocks of code to be executed

// 1

// if (condition) {
//   // block of code to be executed if the condition is true
// // }


//2
// if (condition) {
//   // block of code to be executed if the condition is true
// } else {
//   // block of code to be executed if the condition is false
// }




// 3 
// if (condition1) {
//   // block of code to be executed if condition1 is true
// } else if (condition2) {
//   // block of code to be executed if the condition1 is false and condition2 is true
// } else {
//   // block of code to be executed if the condition1 is false and condition2 is false
// }