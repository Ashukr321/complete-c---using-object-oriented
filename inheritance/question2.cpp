#include<iostream>
using namespace  std;


class Student
{
    public:
    int roll_no;
    string name;
    Student();
    //create the constructor 
    Student(int roll,string name){
        this->name= name;
        this->roll_no= roll;
    }
};


class Fee :public Student{
 public:
 int fee;
 
 Fee(int fee){
    this->fee = fee;
 };
//  void submitFee(){
//     cout <<"submit your fee"<<fee<<endl;
//  };
};


class Result : public Student{
    public:
     int marks;
    char grade;
    Result(int marks, char grade){
        this->marks= marks;
        this->grade= grade;
    }
    
    void display(){
        cout<<"your marks : "<<marks<<endl;
        cout<<"your grade : "<<grade<<endl;
    }
   
};



int main(){

    string name;
    int roll ;
    cout<<"enter your name;"<<endl;
    cin>>name;
    cout<<"enter your rull number "<<endl;
    cin>>roll;

    int fee ;
    cout<<"enter your fee "<<endl;
    cin>>fee;
    int marks ;
    cout<<"enter your marks "<<endl;
    cin>>marks;


    char grade ;
    cout<<"enter your grade"<<endl;
    cin>>grade;


    //create the object of the class 
    Student s1(roll,name); 


    Fee f1(fee);
    f1.submitFee();


    Result r1(marks,grade);
    r1.display();


    return 0; 
}

