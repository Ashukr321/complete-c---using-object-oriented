// here we see the mutators and accessor in the cpp 

#include<iostream>
using namespace std;
// create the  class
class Rectangle {
    // bydefault data members are private 
    private:
    int length;
    int breath ;
    // here we create the setter and getter function so 
    // we can access and mutate the data members value 
    //  mutators 
    public:
    void setLength(int l){
        length =l;
    };
    void setBreath(int b){
        breath =b;
    };

   
    // accessor 
    int getLength (){
        return length;
    }
      int getBreath (){
        return breath;
    };

    public:
    void area(){
        cout <<length*breath<<endl;
    };
    void perimeter(){
        cout <<2*(length+breath)<<endl;
    };
};


int main(){
    //create the object of the class
    Rectangle r1;
    r1.setLength(33);
    r1.setBreath(2);

    // getter   
    cout<<"getter data"<<endl;
    cout << r1.getLength()<<endl;
    cout << r1.getBreath()<<endl;
    
    cout<< "calling the members function  "<<endl;
    //calling the  members function
    r1.area();
    r1.perimeter();
    return 0; 
}