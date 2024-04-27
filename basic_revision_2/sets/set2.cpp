// preprocessor
#include <iostream>
#include <set>
using namespace std;

// main start here ...
int main()
{

  //  create the set
  //  here we can see the set store the  unique elements
  set<int> mySet = {1, 43, 1, 43, 4, 1324, 1, 34, 134, 1, 41, 35, 324, 54, 23};
  for (auto it : mySet)
  {
    cout << it << endl;
  }

  cout << "size of  the set : " << endl;
  cout << mySet.size() << endl;

  return 0;
}

// vector , set , map 
/* 
  vector : is the dynamic in size and auto resize their size  
  map > store the  value in the keys and values pair 
       time complexity -  Olog(n) -> red black tree 
       types -> normal map 
          un ordered  map 
          multimap 
   set  
    set is the similar to the mathematics sets 
        this store the data  unique 
          types   
            normal set   o(1)  hash table 
            unordered set 
            multiset 

*/