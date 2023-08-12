// preprocessor 
#include<iostream>
using namespace std;
//create the class c
class BasciCar{
    public:
    void Start(){
        cout<<"car is start successfully "<<endl;
    }

};

//create the class  derived   advanced class 
class Advanced :public BasciCar{
    public:
    void playMusic(){
        cout<<"music is playing "<<endl;
    }
};
// main method start here ..
int main(){

    //create the object of the class
    Advanced ad ;

    //create the base class pointer 
    BasciCar *ptr = &ad;//this will create a reference to an instance of type
    ad.Start();
    ad.playMusic();
    ptr->Start();
    // ptr->playMusic();// we can't access this 
    return 0;
}