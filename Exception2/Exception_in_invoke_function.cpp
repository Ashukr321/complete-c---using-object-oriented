#include <iostream>
using namespace std;

// here we see the excetion in the calling function
// that is handle by the using the  try and catch block
// we can handle the  exception while we calling the  exception
// generate function
void devide(int a, int b)
{
  if (b == 0)
  {
    throw(b);
  }
  else
  {
    int c;
    cin >> a >> b;
    c = a / b;
    cout << "result " << c;
  }
}

int main()
{
  int a, b, c;
  cout << "enter the value of the a and b" << endl;
  cin >> a >> b;

  try
  {
    devide(a, b);
  }
  catch (int b)
  {
    cout << " we can't devide the number by zero " << b;
  }

  return 0;
}