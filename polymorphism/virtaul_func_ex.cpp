//  example of the  virtual class function
#include<iostream>
using namespace std;
// create the class 
class BasicCar{
    public :
   virtual void start(){
        cout<<" basic car is started "<<endl;
    }
};
class Advanced :public BasicCar{
    public:

    void start(){
        cout<<" advanced car is started "<<endl;
    }
};

// main methods start here ...
int main(){
    //create the base class pointer and derived class object 
    BasicCar *ptr = new Advanced();
    ptr->start();
    return 0;
}