#include <iostream>
#include "Student.h"

void menu()
{
    cout << "1. Create New Student: " << endl;
    cout << "1. Create New Student: " << endl;
    cout << "1. Create New Student: " << endl;
    cout << "1. Create New Student: " << endl;
    cout << "1. Create New Student: " << endl;
    cout << "Your Choice...";
}


int main()
{

    int size = 10;

    student arr[size];
    //create  the size of the array of 10 


    int idx = 1;
    bool flag = true;

    // here we loop all the array 
    while (flag == true)
    {

        int choice;

        menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout "Choice" << endl;
            {
                int rollno;
                cout << "Roll No.";
                cin >> rollno;
                string name;
                cout << "Name: ";
                cin >> name;
                char gender;
                cout << "Roll No.:";
                cin >> gender;

                arr[++idx] = Student(rollno, name, gender, course);
            }
            break;

        case 2:
            cout << "Choice 2" << endl;
            int pos;
            cout << "Give Position";
            cin >> pos;
            if (pos <= idx)
                cout << arr[pos].toString();
            else
                cout << "No Student Exists" << endl;
            break;

        default:
        
            cout << "Wrong" << endl;
            break;
        }
        return 0;
    }
