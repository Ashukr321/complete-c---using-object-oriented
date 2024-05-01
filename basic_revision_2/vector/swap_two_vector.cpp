// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swapTwoVector(vector<int> &v1, vector<int> &v2)
{
  v1.swap(v2);
}
// main starts here ...
int main()
{
  vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8};
  vector<int> v2 = {9, 10, 12, 23, 23, 324, 324, 32, 43 ,43};

  cout << "before swap the vector v1 : " << endl;
  for (int it : v1)
  {
    cout << it << " ";
  }

cout<<endl;
  cout << "Before swap vector v2 " << endl;
  for (int it : v2)
  {
    cout << it << " ";
  }
  cout<<endl;

  swapTwoVector(v1, v2);
  cout << "After swap the vector v1 " << endl;
  for (int it : v1)
  {
    cout << it <<" ";
  }
  cout<<endl;

  cout << "After swap vector v2" << endl;
  for (int it : v2)
  {
    cout << it << " ";
  }
  return 0;
}
