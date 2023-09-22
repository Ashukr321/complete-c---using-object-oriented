// header file
#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
    char gender;
    string course;

    // create the defalut constrctor
    Student(){

    };

    // create the parameterised constructor
    Student(int roll_no, string name,
            char gender, string course)
    {
        this->name = name;
        this->roll_no= roll_no;
        this->gender = gender;
        this->course = course;
    }

    //create the function that print the  data of the student in the string formate 

    void toString(){
        cout<<"name :"<<this->name<<"\n" 
        <<"roll_no :"<<this->roll_no<<"\n"
        <<"gender :"<<this->gender<<"\n"
        <<"course :"<<this->course<<"\n"<<endl; 
    }


};