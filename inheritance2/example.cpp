#include<iostream>
using  namespace std;
class Animal {
  // bydefault this fucntion is the private 
 protected:
  void speak(){
    cout<<"I am an animal." <<endl ;
  }
};


// create the another class dog and inherit the class 
class Dog : public Animal{
  public:
  void bark() {
     cout << "Woof! Woof!" << endl;
  }

};

int main(){ 
  //create the object of the class 
  Dog myDog;
  myDog.bark(); //calling the  dog class function 
  myDog.speak();
  return 0; 
}


// inheritance 
// inherit the parent properties in to the child  class : 
// type of the inheritance 
// simple inheritance 
// multiple inheritance
// hierarchical inheritance
// hybrid inheritance
// multilevel inheritance

// public and private inheritance
