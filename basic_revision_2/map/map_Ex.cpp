//preprocessor
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;


//main start here ...
int main(){
  
  map<int, string>myMap;
  myMap.insert({4,"aman"});
  myMap.insert({2,"rahul singh"});
  // cout<<myMap[1]<<endl;.
  // cout<<myMap[2]<<endl;
  myMap.erase(2);// this will remove the value at 2 
  for (auto it : myMap)
  {
    cout<<it.first<<":"<<it.second<<endl;;
  }
  

  return 0;

}