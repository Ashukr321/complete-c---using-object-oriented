#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    long std_id;
    char gender;
    string department;

public:
    void setname(string Coming_name)
    {
        bool valid = true;
        for (char c : Coming_name)
        {
            if (isdigit(c) || ispunct(c))
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            this->name = Coming_name;
        }
        else
        {
            cout << "Invalid Name 😔😔 mood-off ho gya 😂 " << endl;
        }
    }

    void setstdID(long id)
    {
        int cnt = 0;
        int n = id;
        while (n != 0)
        {
            n = n / 10;
            cnt = cnt + 1;
        }

        if (cnt == 9)
        {
            std_id = id;
        }
        else
        {
            cout << "invalid ID";
        }
    }

    void setGender(char Comming_gender)
    {
        if (Comming_gender == 'M' || Comming_gender == 'F' || Comming_gender == 'm' || Comming_gender == 'f' || Comming_gender == 'O' || Comming_gender == 'o')
        {
            this->gender = Comming_gender;
        }
        else
        {
            cout << "enter valid gender 😔😔 mood-off ho gaya" << endl;
        }
    }

    void setDepartment(string Comming_department)
    {
        if (Comming_department == "CSE" || Comming_department == "ECE" || Comming_department == "BCA" || Comming_department == "BBA" || Comming_department == "CE" || Comming_department == "EEE" || Comming_department == "EC" || Comming_department == "ME" || Comming_department == "PE" || Comming_department == "MCA")
        {
            this->department = Comming_department;
        }
    }

    string toString()
    {
        return "Student ID : " + to_string(std_id) + "\nName: " + name + "\nGender: " + gender + "\nDepartment: " + department;
    }
};

int main()
{
    string name1, name2, department1, department2;
    long id1, id2;
    char gender1, gender2;

    Student s1;
    cout << "student 1 " << endl;

    cout << "enter your name " << endl;
    getline(cin, name1);

    cout << "enter your student id (must be 9 digits) " << endl;
    cin >> id1;
    cin.ignore(); // Clear the newline character

    cout << "enter your gender" << endl;
    cin >> gender1;
    cin.ignore(); // Clear the newline character

    cout << "enter your department in Capital letter " << endl;
    cin >> department1;

    Student s2;
    cout << "student 2" << endl;

    cin.ignore(); // Clear the newline character
    cout << "enter your name " << endl;
    getline(cin, name2);

    cout << "enter your student id (must be 9 digits) " << endl;
    cin >> id2;
    cin.ignore(); // Clear the newline character

    cout << "enter your gender" << endl;
    cin >> gender2;
    cin.ignore(); // Clear the newline character

    cout << "enter your department in Capital letter " << endl;
    cin >> department2;

    s1.setname(name1);
    s1.setstdID(id1);
    s1.setGender(gender1);
    s1.setDepartment(department1);

    s2.setname(name2);
    s2.setstdID(id2);
    s2.setGender(gender2);
    s2.setDepartment(department2);

    cout << s1.toString() << endl;
    cout << endl;
    cout << s2.toString() << endl;

    return 0;
}
