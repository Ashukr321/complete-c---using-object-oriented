//preprocessor
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;


//main start here ...
int main(){
  //  create the map whare keys  is the string and values is the the integer array
  map <string , int> myMap;
  myMap["apple"] = 23;
  cout<<myMap["apple"]<<endl;
  
  map<int, string > myMap2;
  myMap2[1] ="Ashutosh kumar";
  
  cout<<myMap2[1]<<endl;
   return 0;
}