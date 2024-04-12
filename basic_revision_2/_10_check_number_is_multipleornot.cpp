// preprocessor
#include <iostream>
using namespace std;

bool multiple(int n1, int n2)
{
  if (n2 % n1==0)
  {
    return true;
  }
  return false;
}
// main start here ...
int main()
{
  int n1, n2;
  cout << "enter your first number ! " << endl;
  cin >> n1;
  cout << "enter your 2nd number !" << endl;
  cin >> n2;
  if (multiple(n1, n2))
  {
    cout << n2 << " is multiple of " << n1 << endl;
  }
  else
  {
    cout << n2 << "is not multiple of " << n1 << endl;
  }
  return 0;

}