#include<iostream>
using namespace std;

// class ceated myfirst class 
class MyFirstClass {
public:
    // Method to calculate factorial
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }

    // Method to check if a number is a Strong Number
    bool isStrong(int num) {
        int original_num = num;
        int digit_sum = 0;

        while (num > 0) {
            int digit = num % 10;
            digit_sum += factorial(digit);
            num /= 10;
        }

        return original_num == digit_sum;
    }
};



//  main methods start here 
int main() {
    // create object of the class 
    
    MyFirstClass myObj;

    // Taking input from the user for the number to calculate factorial
    int numToFactorial;
    cout << "Enter a number to calculate factorial: ";
    cin >> numToFactorial;

    int resultFactorial = myObj.factorial(numToFactorial);
    cout << "Factorial of " << numToFactorial << ": " << resultFactorial << endl;

    // Taking input from the user for the number to check if it's a Strong Number
    int numToCheck;
    cout << "Enter a number to check if it's a Strong Number: ";
    cin >> numToCheck;

    if (myObj.isStrong(numToCheck)) {
        cout << numToCheck << " is a Strong Number." << endl;
    } else {
        cout << numToCheck << " is not a Strong Number." <<endl;
    }

    return 0;
}






