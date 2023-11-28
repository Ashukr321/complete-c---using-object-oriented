// here we see the how to verload postfix
#include <iostream>
using namespace std;

class Number
{
public:
  int a;
  Number(int a)
  {
    this->a = a;
  }
  // operator overloading
  void operator++()
  {
    // return *this+1;
    this->a = this->a + 3;
  }
};
// main methods start here
int main()
{
  Number n1(23);
  ++n1;
  cout << n1.a << endl;
  return 0;
}