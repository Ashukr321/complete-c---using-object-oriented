//preprocessor
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;


//main start here ...
int main(){
  map<int,string > myMap;
  myMap[1] = "hi";
  cout<<myMap.at(1)<<endl;
  
  //  make_pair 
  myMap.insert(make_pair(2,"good morning"));
  cout<<myMap[2]<<endl;
  cout<<myMap.size()<<endl;
  myMap.clear();
  cout<<myMap.empty()<<endl;
  

  return 0;
}

