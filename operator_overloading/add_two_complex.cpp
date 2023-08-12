// add two complex number by  the help of the operator overloading 

#include<iostream>
using namespace std;
// create the class 
class Complex {
    public:
    int real ;
    int img ;

    // create the constructor 
    Complex (int r , int i){
        real = r;
        img = i;
    }
    Complex (){
       
    }
    
    //  create the facilatators functions 
    Complex operator+(Complex x){
        //create the temp complex and return it 
        Complex temp;
        temp.real = real+x.real;
        temp.img = img+x.img;
        return temp;
    }
    
};

int main(){
    // create the object 
    Complex c1(2,3);
    Complex c2(3,5);    

    Complex c3;
    // c3 = c1.add(c2);

    // operator overloading 
    c3 = c1+(c2);
    cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
    return 0;
}