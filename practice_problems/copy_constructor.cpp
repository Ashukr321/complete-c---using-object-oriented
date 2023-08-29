#include<iostream>
using namespace std;
//create the class 
class Add{
    int x ,y ,z;
    public:
    Add(int a, int b);
    Add(Add &);
    void calculate(void);
    void display();
};

Add::Add (int a, int b){ 
    this->x =a ;
    this->y = b;
};
Add::Add(Add &p){
    x=p.x;
    y = p.y;
    cout<<"value of x and y for new object : "<<x<<" and "<<y<<endl;
}


void Add ::calculate(void){
    z = x+y;
};

void Add::display(void){
    cout<<"the sum of the x and y is : " << z<<endl;
};

// main method start .... 

int main(){
    Add a (3,4);
    Add b(a);
    b.calculate();
    b.display();
    return 0;
    

}