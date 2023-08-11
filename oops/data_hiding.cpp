// data hiding in the cpp 
// preprocessor 
#include<iostream>
using namespace std;
//create the class of the  rectangle 
class Rectangle{
    int length ; 
    int breath ;

    public :
    // members functions 
    void area(){
        cout<<length*breath<<endl;
    }   
    void perimeter (){
        cout<< 2 *(length+breath)<<endl;
    }

};

int main(){

    return  0 ; 
}
// data hiding is related to encapsulation 
// hidding avoid the mismistaken taken by the programmer 
// encapsulation and abstraction 
// ecapsulation : means combine the related data 
// abstraction menas hidding the data and function only show the required fucntion 

