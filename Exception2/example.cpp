#include <iostream>
using namespace std;

// main methods start here
int main()
{
  int a, b, c;
  cout << "enter  the value of the  a , b  " << endl;
  cin >> a >> b;
  try
  {
    if (!b == 0)
    {
      c = a / b;
      cout << "result is :" << c << endl;
    }
    else
    {
      throw(b);
    }
  }
  catch (int b)
  {
    cout << "we can't devide number by :" << b << endl;
  }

  return 0;
}