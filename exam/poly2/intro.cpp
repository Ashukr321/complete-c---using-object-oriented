// poly morphism is devided in to the two parts
// compile time
// run time
// compile time
// function overloading
// operator overloading

// function overloading
// function name is same  but the number of argument is different
#include <iostream>
using namespace std;
class Number
{
public:
  void add(int a, int b)
  {
    cout << "the sum of the enter your interger number is " << a + b;
  }
  // here we create the another funtion
  float add(float a, float b, float c)
  {
    float sum = a + b + c;
    return sum;
  }
};
int main()
{

  // create the object of the class Number
  Number n1, n2;
  n1.add(341, 34);
  cout << endl;
  cout << n2.add(32.2, 23.3, 34) << endl;
  return 0;
}