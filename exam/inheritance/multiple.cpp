#include<iostream>
using namespace std;

 class A {
  public:
    void add(int a , int b){
        cout<<a+b<<endl;
    }
 };

 class B {
  public:
  void multiply(int a ,int b){
    cout<<a * b <<endl;
  }
 };

class C : public A ,public B {
  public:
  void div (int a , int b){
    cout<<a/b<<endl;
  }
};

int main(){
  C obj;
  obj.add(12,3);
  obj.multiply(23,3);
  obj.div(22,2);
  return 0; 
}

// single inheritance 
// mulitple inheritance 
