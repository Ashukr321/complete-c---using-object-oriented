#include<iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;
public:
    Student() {}
    Student(int roll, string name) : roll_no(roll), name(name) {}
};

class Fee : public Student
{
public:
    int fee;

    Fee(int roll, string name, int fee) : Student(roll, name), fee(fee) {}

    void submitFee()
    {
        cout << "Fee submitted: " << fee << endl;
    }
};

class Result : public Student
{
public:
    int marks;
    char grade;

    Result(int roll, string name, int marks, char grade) : Student(roll, name), marks(marks), grade(grade) {}

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    string name;
    int roll;

    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your roll number: " << endl;
    cin >> roll;

    int fee;
    cout << "Enter your fee: " << endl;
    cin >> fee;

    int marks;
    cout << "Enter your marks: " << endl;
    cin >> marks;

    char grade;
    cout << "Enter your grade: " << endl;
    cin >> grade;

    Fee f1(roll, name, fee);
    f1.submitFee();
   
    Result r1(roll, name, marks, grade);
    r1.display();

    return 0;
}
