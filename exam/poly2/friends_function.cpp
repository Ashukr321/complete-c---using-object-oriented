// friends function
#include <iostream>
using namespace std;


class Coder
{
public:
  string name = "Ashutosh kumar";
  void show()
  {
    cout << " hi code  how are you" << endl;
  }
  void Data(Coder &c); // this declration of the function
};

// create the another that take  object of the that class and use their instacne variables
void Data(Coder &c)
{
  cout << c.name << endl;
  c.show();
};

int main()
{
  // create the object of the class
  Coder c1;
  Data(c1);
  return 0;
}
// defined outside the class scope can't calling by the object of the class
// one friends function can be frineds of the multiple class
// a frineds function can access member directly using object name and by dot
// friends function declare and defined in class
//  a function  friends of one class can be friends of another class
