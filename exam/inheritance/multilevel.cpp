// //inheritance

// // types of inheritance
// // simple  ⭐⭐
// // mulitple  ⭐⭐
// // multlevel
// // hybrid
// //  hirericle
// // simple  ⭐⭐

// #include<iostream>
// using namespace std;

// // base class // parent class
// class A { // PASCAL CONVENTION
//   public:// access modifier
//   void sum (int a, int b){
//     cout<<a+b;
//   }
// };

// // class b
// // for the inherit -> :

// // derived class or child class
// class B : public A{
//   public:
//   void  sub(int a, int b){
//     cout<<a-b<<endl;
//   }
// };

// int main(){
//   B obj1;
//   obj1.sum(12,4);
//   cout<<endl; // 16
//   obj1.sub(12,2); // 10
//   return 0;
// }

// // mulitple  ⭐⭐

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//   void add(int a, int b)
//   {
//     cout << a + b;
//   }
// };

// class B {
//   public:
//   void sub(int a , int b){
//     cout<<a-b;
//   }
// };

// class C :public A ,public B {
//   public:
//   void multiply (int a , int b){
//     cout<<a*b<<endl;
//   }
// };




//  int main()
// {
//   C obj1;
//   obj1.add(12,3); // 15  
//   cout<<endl;
//   obj1.sub(23,5); //  18
//   cout<<endl;
//   obj1.multiply(23,4);
//   cout<<endl; //92
//   return 0;
// }


// multilevel 

// #include<iostream>
// using namespace std;

// class A {
//    public:
//    void add(int a , int b){
//     cout<<a+b;
//    }
// };


// // sub , add
// class B :public A  {
//   public:
//   void sub(int a ,int b){
//     cout<<a-b;
//   }
// };


// // mul , add , sub
// class C  : public B{
//   public:
//   void mul(int a, int b){
//     cout<<a*b<<endl;
//   }
// };

// int main(){
//   C obj1;
//   obj1.add(12,21);
//   cout<<endl;
//   obj1.add(31,3);
//   cout<<endl;
//   obj1.mul(23,3);
//   return 0;
// }

// // hirericle 
// #include<iostream>
// using namespace std;

// class A {
//   public: 
//   void Animal(){
//     cout<<"this is a animal class"<<endl;
//   }
// };

// class B : public A{
//   public: 
//   void dog(){
//     cout<<"this is a dog"<<endl;
//   }
// };

// class C :public A {
//   public: 
//   void cat(){
//     cout<<"this is a cat class"<<endl;
//   }
// };

// class D :public A{
//   public: 
//   void cow(){
//     cout<<"this is a cow class"<<endl;
//   }
// };



// int main(){

//   B obj1;
//   C obj2;
//   D obj3;

//   obj1.Animal(); // BASE CLASS
//   obj1.dog(); // CHILD OR DERIVED CLASS

//   obj2.Animal();
//   obj2.cat();

//   obj3.Animal();
//   obj3.cow();

//   return 0;
// }
// hybirid 

#include<iostream>
using  namespace std;

class A {
  public:
  void add(int a, int  b){
    cout << "addition of two numbers = " << (a + b) << endl ;
  }
};

class B :public A {
  public : 
  void  sub (int a, int b){
    cout << "subtraction of two numbers = " << (a - b) << endl ;
  }
};

class C :public A {
  public : 
  void mul(int a, int b){
    cout << "multiplication of two numbers = " << (a * b) << endl ;
  }
};

class D :public B , public C{
  public:
  void div(int a, int b){
    cout<< "division of two number "<<a/b<<endl;
  }
};

int main(){
  D obj1;
  obj1.B::add(23,2);
  cout<<endl;
  obj1.div(12,6);
  cout<<endl;
  obj1.mul(23,5);
  cout<<endl;
  obj1.sub(23,12);

  return 0;
}