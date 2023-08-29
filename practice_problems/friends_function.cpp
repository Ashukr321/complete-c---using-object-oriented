// friends function 
#include<iostream>
using namespace std;

//create the  class 
class Add {
    int x ,y ,z;
    public:
    Add(int ,int );
    friend int calculate(Add p);
};

Add::Add(int a ,int b){
    this->x = a;
    this ->y = b;
    
}

int calculate(Add p){
    return(p.x+p.y);

}
//main method start here ;
int main(){
    // create the object of the class 
    Add a(3,4);
    cout<<calculate(a);
    return 0;

}