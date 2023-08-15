// make a simple calculator
#include <iostream>
using namespace std;

// main method start here ..
int main()
{
    char op;
    float num1, num2;
    cout << "enter the 1st  operand" << endl;
    cin >> num1;
    cout << " enter operator + or - or * or / " << endl;
    cin >> op;
    cout << "enter the 2nd operand" << endl;
    cin >> num2;
    cout << endl;
    switch (op)
    {
    case '+':
        cout << "Result is " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result is " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result is " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Result is " << num1 / num2 << endl;
        break;

    default:
        cout << "error! Operator is not correct " << endl;
        break;
    }

    system("pause");
    return 0;
}