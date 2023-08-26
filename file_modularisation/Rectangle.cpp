#include "Rectangle.h"

//constructor 
Rectangle::Rectangle(int l,int b){
    this->length = l;
   this->breadth = b;
}

int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}