// preprocessor
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

// main start here ...
int main()
{
  map<int, string> myMap;
  // insert the elements
  myMap.insert(make_pair(1, "A"));
  myMap.insert(make_pair(2, "B"));
  myMap.insert(make_pair(3, "C"));
  myMap.insert(make_pair(4, "D"));
  myMap.insert(make_pair(5, "E"));

  // // loop the map
  // for (auto it =myMap.begin();it!=myMap.end() ; ++it)
  // {
  //   cout<<it->first<<":"<<it->second<<endl;
  //   // first is the key and second is the values
  // }

  // find methods
  // auto it = myMap.find(6); // if element is found then return it end()
  cout << "lower bound" << endl;
  auto it1 = myMap.lower_bound(2);
  while (it1 != myMap.end())
  {
    cout << it1->first << "" << it1->second << endl;
    it1++;
  }

  
  cout << "upper bound" << endl;
  auto it = myMap.upper_bound(2);
  while (it != myMap.end())
  {
    cout << it->first << "" << it->second << endl;
    it++;
  }

  return 0;
}