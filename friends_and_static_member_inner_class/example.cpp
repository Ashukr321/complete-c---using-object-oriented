// here we see the and example of the enova class
#include<iostream> 
using namespace std;
//create the class 
class Inova {
    public:
    static int price ;

    static int getPrice(){
        return price;
    }
};
int Inova::price = 20; // this is access globaly in this programme 

// :: scope resolution in the cpp 

int main(){
    //create the  object 
    Inova i1, i2 ,i3;
    cout<<i1.price<<endl;
}