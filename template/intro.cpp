/*
  tempate is the features that allow to code generic code in the cpp 
  for creating template we have to use the template keywords in the cpp 

  template enable us to create class and function that work with any data type in the cpp 
  stl is the extended version of the template 
*/
// #include<iostream>
// using namespace std;
// template <typename T>
//  //function template 
//  void swapNum( T &a , T &b){
//   T temp = a ;
//   a= b ;
//   b = temp;
//  }
//  int main(){
//   int x = 5, y = 3;
//   cout<<x<<endl;
//   cout<<y<<endl;
//   swapNum(x,y);
//   cout<<"x:"<<x<<endl;
//   cout<<"y:"<<y<<endl;
//   return 0; 
// }

#include<iostream>
using namespace std;
template <class T>
class Vector {
  public:
  T size;
  T vect[n];
  // create the constructor 
  Vector(T n ){
    this->size = n;
    
  }
};
int main() {
  Vector<int>vect1(4);
 
  
}