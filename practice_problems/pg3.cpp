// default constructor 
#include<iostream>
using  namespace std;
//create the class 
class Add {
    public:
     int x , y ,z ;
     public:
     Add();// default constructor 
     void calculated (void);
     void display(void);

};
Add::Add(){
    x = 33;
    y = 5;
}
void Add::calculated(void){
    z= x+y;
}

void Add ::display(void){
    cout<<"the sum of the two number is "<< z <<endl;
}

int main(){
    //create the object 
    Add obj; //internally the default cosntructor is called ;
    obj1.calculated();// here calculated first z = x+y;
    obj1.display();// here just print the value of the z;
    return 0;
}