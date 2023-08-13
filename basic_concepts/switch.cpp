// switch case in the cpp
#include <iostream>
using namespace std;

// main methods start here
int main()
{

    // switch (expression)
    // {
    // case x:
    //     // code block
    //     break;
    // case y:
    //     // code block
    //     break;
    // default:
    //     // code block
    // }
    int day = 4;
    switch (day)
    {
    case 6:
        cout << "Today is Saturday";
        break;
    case 7:
        cout << "Today is Sunday";
        break;
    default:
        cout << "Looking forward to the Weekend";
    }
    return 0;
}

// The switch expression is evaluated once
// The value of the expression is compared with the values of each case
// If there is a match, the associated block of code is executed
// The break and default keywords are optional, and will be described later in this chapter

// The break Keyword

// When C++ reaches a break keyword, it breaks out of the switch block.

// This will stop the execution of more code and case testing inside the block.

// When a match is found, and the job is done, it's time for a break. There is no need for more testing.