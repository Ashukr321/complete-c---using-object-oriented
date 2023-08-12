// here we see the insertion operators  overloading in the cpp 
#include<iostream> 
using namespace  std; 

//create the class 
class Complex {
    public :
    int real ;
    int img;

    public:
    // this is the constructor 
    Complex(int r= 0,int i = 0){
        real= r;
        img = i;
    }

    //create the display function 
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend ostream & operator<<(ostream &out , Complex &c);
};
     ostream & operator<<(ostream &out , Complex &c){
        out <<c.real<<"+"<<c.img<<"i"<<endl;
        return out;
     }

int main(){
    // create the static object
    Complex c1(3,5);
    // c1.display();
    cout<<c1;
    return 0;
}