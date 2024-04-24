// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersectionVector(vector<int> &v1, vector<int> &v2)
{
  vector<int> intersection;
  vector<int> sorted_v1 = v1;
  vector<int> sorted_v2 = v2;
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
  // set_intersection we can use this inbuilt functions that help in to the get the intersection of the two vectors
  set_intersection(sorted_v1.begin(), sorted_v1.end(), sorted_v2.begin(), sorted_v2.end(), back_inserter(intersection));
  // back_inserter this function is used to get the intersection of the two vectors
  return intersection;
}

// main start here ...
int main()
{

  // create two vector v1 and v2
  vector<int> v1 = {3, 4, 234123, 4123, 10};
  vector<int> v2 = {3, 4, 234123, 4123, 567890,10, 123456789};

  // create the function that return the intersection vector
  vector<int> intersection = intersectionVector(v1, v2);
  cout << "The common elements are" << endl;
  for (int x : intersection)
  {
    cout << x << endl;
  }
  cout<<"capacity of the vector is the : "<<intersection.capacity()<<endl;
  return 0;
}