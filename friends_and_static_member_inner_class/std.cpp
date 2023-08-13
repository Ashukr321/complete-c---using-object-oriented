// create the class for the student static 
#include<iostream>
using namespace std;

//create the class of the students 
class Studetns {
    public:
    int rollNum;
    string name;
    static int addMinNum ;
    //create the constructor 
    Studetns (string n){
        addMinNum++;
        rollNum = addMinNum;
        name = n;
    }
    void display(){
        cout <<"name"<<":  "<<name <<endl<<rollNum<<endl;
    }
};
// set the value of the  addminNum by the help of the scope resolution 
// :: 
int Studetns ::addMinNum= 0;
// main methods start 
int main(){
  //Create the object of the studnts 
  Studetns s1("ashutosh");
  Studetns s2("ankit");
  Studetns s3("ankit");
  Studetns s4("ankit");
  s1.display();
  s2.display();
  cout<<"Number Addmision : "<<Studetns::addMinNum<<endl;
}
