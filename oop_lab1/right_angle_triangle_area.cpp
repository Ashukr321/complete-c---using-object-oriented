//  calculate the area   of the right angle triangle
#include <iostream>
using namespace std;

// main method start here ...

int main()
{

    cout << "calculate the area of the right angle triangle " << endl;
    float base, height, area;
    // get input from user for base and height
    cout << "enter the base  of the triangle" << endl;
    cin >> base;
    cout << "enter the height of the triangle" << endl;
    cin >> height;
    if (base > 0 && height > 0)
    {
        area = 0.5 * base * height;
        cout << "area of the  right trangle  is => " << area << endl;
    }
    else
    {
        cout << "enter valid input " << endl;
    }

    system("pause");
    return 0;
}