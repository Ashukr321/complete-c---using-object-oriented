//preprocessor
#include<iostream>
using namespace std;

class Rectangle{
  private:
    double length;
    double breadth;

  public:
  // calculate the area 
  double calculateArea(){
    return length*breadth;
  }
  double calculatePerimeter(){
    return 2*(length+breadth);
  }

  // getWidth
  double getWidth(){
    return this->breadth;
  }
  double getLength(){
    return this->length;
  }

  // setter 
  void setWidth(double w){
    this->breadth = w;
  }
  void setLength(double l){
    this->length = l;
  }
};

//main start here ...
int main(){
  
  //create the object of the react 
  Rectangle rect;
  rect.setLength(12);
  rect.setWidth(23);
  cout<<rect.calculateArea()<<endl;
  cout<<rect.calculatePerimeter()<<endl;
  cout<<rect.getWidth()<<endl;
  cout<<rect.getLength()<<endl;
  return 0;
}