// here we see the what is runtime polymorphism in the cpp
// to do runtime polymorphism we use virtual key words
#include <iostream>
using namespace std;
// create the class A
class A
{
public:
  virtual void show()
  {
    cout << "this is class a" << endl;
  }
};

// create the another class and inherit the class A
class B : public A
{
public:
  void show()
  {
    cout << " this is class b" << endl;
  }
};
int main()
{
  // create the base class pointer
  A obja, *bptr; // base class pointer can store the address of the child class address
  B objb;
  bptr = &obja;
  cout << bptr << endl;
  bptr = &objb;
  bptr->show();

  // derived class pointer can't store the address of the base class

  return 0;
}