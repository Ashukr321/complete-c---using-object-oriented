//preprocessor
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


//main start here ...
int main(){
  // intro to set in cpp 
   set<string>s ;
   s.insert("abc");
   auto  it= s.find("abc");
  cout<<*it<<endl;
  return 0;
}