//  validate the user input
#include <iostream>
using namespace std;
// validate the user input check the user input number is the natural number

int main()
{
  int a;
  cout << "enter your number " << endl;
  cin >> a;
  try
  {
    if (  a> a)
    {
    
      cout << "enter your number is the natural number " << a;
    }
    else
    {
      throw(a);
    }
  }
  catch (int a)
  {
    cout << "your number is not a natural number plz enter valid input" << endl;
  }

  return 0;
}