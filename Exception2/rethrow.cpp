// here we  the rethrouw the exception
#include <iostream>
using namespace std;
void divide(int a, int b)
{
  try
  {
    if (b == 0)
    {
      throw("Divide by the zero Exception");
    }
    else
    {
      cout << "The result is " << a / b << endl;
    }
  }
  catch (const char *msg)
  {
    cout << " in try block of called function" << endl;
    cout << " re throwing Exception" << endl;
  }
}

int main()
{
  int a, b;
  cout << "enter the value of the a and b" << endl;
  cin >> a >> b;
  try
  {
    // calling the function
    divide(a, b);
  }
  catch (char *msg)
  {
    cout << " in try catch block of main()" << endl;
    cout << msg << endl;
  }
  cout << " existing main()" << endl;
  return 0;
}