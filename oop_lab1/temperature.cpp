// calculate the tempearature and convert the celcius to f
#include <iostream>
using namespace std;

// main method start here 
int main()
{
    float c ,f ;
    cout<<"enter your temperature in celcius"<<endl;
    cin>>c;
    f = c *1.8+32;
    cout << "In Celcius: " << c << "*C ;" << endl;
	cout << "In Fahrenheit: " << f << "F ;" << endl;
    system("pause");
    return 0;
}