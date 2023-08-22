#include <iostream>
#include "myData.h"
using namespace std;

// class MyFristClass
// {
// public:
//     int a;
//     void show(){

//     };

//     static int factorial(int n)
//     {
//         if (n == 0 || n == 1)
//         {
//             return 1;
//         }
//         return n * factorial(n - 1);
//     }
    
//     static bool isStrong(int x)
//     {
//         int factSum = 0;

        
//         int temp = x;
//         while (temp!=0)
//         {
//             factSum += factorial(temp % 10);
//             temp /= 10;
//         }

//         return (factSum == x);
//     }
// };

int main()
{
    
    myData::MyFristClass obj1;

    int a;

    cout << " your number" << endl;
    cin >> a;
    // cout <<myData::MyFristClass::isStrong(a)<<endl;
    cout <<obj1.countDigit(a)<<endl;  
    // cout <<obj1.factorial(a) << endl;
    return 0;
}