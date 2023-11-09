#include <iostream>
using namespace std;

//  Handling multiple catch block  with one try block code

// main methods start here ....
int main()
{
  int a, b, c;
  cout << "Enter two numbers : ";
  cin >> a >> b;
  try
  {
    if (!b == 0)
    {
      c = a / b;
      cout << "result of division of two number is : " << c << endl;
    }
    else
    {
      throw(b);
    }
  }
  catch (int b)
  {
    cout << "we can't devide by " << b << endl;
  }
  catch (char b)
  {
    cout << "error in input data type";
  }

  return 0;
}