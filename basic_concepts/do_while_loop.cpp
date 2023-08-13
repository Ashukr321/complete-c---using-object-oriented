// do while loop in the cpp

// preprocessor
#include <iostream>
using namespace std;

// main method start here
int main()
{
    int sum = 0 ;
    int i = 1;
    do
    {
       sum+=i;
        i++;
    } while (i <= 10);
    cout<<"the sum of the number is "<<sum<<endl;
    return 0;
}