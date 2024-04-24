//preprocessor
#include<iostream>
#include<vector>
using namespace std;



//main start here ...
int main(){
  vector<int>v;// here we create the vector with emptry 
  vector<int>v2(5,10);// here we create the vector with size of the 5 and nitialize the vector with 10
  v2.push_back(23);
   cout<<v2.size()<<endl;
   v2.resize(10);
   cout<<v2.size()<<endl; // here we change the size of the vector
   // ⭐⭐ get the value at index passed index 
   int element = v2.at(5);
   cout<<element<<endl;
   cout<<v2.front()<<endl;
   v2.insert(v2.begin()+2,1223);
   int element2 = v2.at(2);
   cout<<element2<<endl;

   // clear 
   v2.clear();
   cout<<v2.empty()<<endl;// 1 for the true;
     return 0;
}

//what is he vector properties 
// push_back 
//pop 
// pop_back 