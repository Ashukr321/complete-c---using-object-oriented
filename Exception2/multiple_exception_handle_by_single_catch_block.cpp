#include <iostream>
using namespace std;

// main methods

int main()
{
  int a, b, c;
  cout << "enter the value of the number" << endl;
  cin >> a >> b;
  try
  {
    if (!b == 0)
    {
      c = a / b;
      cout << "result :" << c << endl;
    }
    else
    {
      throw(b);
    }
  }
  catch (...)
  {
    // ... this will handle all the type of the exceptions 
    cout << "we can't devide number  by :" << b;
  }

  return 0;
}