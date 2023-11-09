// multiple catch block
#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "enter the value of a and b " << endl;
  cin >> a >> b;
  try
  {
    if (!b == 0)
    {
      c = a / b;
      cout << "result of  the enter ur value is :" << c << endl;
    }
    else
    {
      throw(b);
    }
  }
  catch (int b)
  {
    cout << "we can't devide the number by the zero :" << b << endl;
  }
  catch (char b)
  {
    cout << "plz enter the valid input " << endl;
  }

  return 0;
}