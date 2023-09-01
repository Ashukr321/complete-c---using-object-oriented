
// preprocessor
#include <iostream>
#include <string>
using namespace std;

// class create here ..🤷‍♂️
class Student
{
    // private attributes
    private: // - ⭐ symbol of private attributes
    string name;
    long std_id;
    char gender;
    string department;

    // functionallity start here ....

public:
    /* + 🔥 symbol of private attributes

    ⭐⭐⭐⭐ setter function ⭐⭐⭐

    ⭐⭐⭐⭐⭐ setter function for student name ⭐⭐⭐⭐⭐ */

    void setname(string Coming_name)
    {
        /* check the name is valid or not
         special character and digit inside the
        name not allow

        🤷‍♂️ isdigit(passing char)->  return t and f
        🤷‍♂️ ispunct(passing char )-> return t and f

        we use for each loop that iterate on each character

        || -> or logical  operators  😎😎

        */
        // create a variables bool;
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
            // name is valid so we set the comming_name to name
            this->name = Coming_name;
        }
        else
        {
            cout << "Invalid Name 😔😔 mood-off ho gya 😂 " << endl;
        }
    }
    /*
        setter std_id
        id must be 9 digit -> 999999999 maximux  number of digit also 9
    */
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

    // setter for gender
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

    // setter for department
    void setDepartment(string Comming_department)
    {
        if (Comming_department == "CSE" || Comming_department == "ECE" || Comming_department == "BCA" || Comming_department == "BBA" || Comming_department == "CE" || Comming_department == "EEE" || Comming_department == "ECS" || Comming_department == "ME" || Comming_department == "PE" || Comming_department == "MCA")
        {
            this->department = Comming_department;
        }
    }

    // return output tostring
    string toString()
    {
        return "Student ID : " + to_string(std_id) + "\nName: " + name + "\nGender: " + gender + "\nDepartment: " + department;
    }
};

int main()
{

    // declaare the valriables
    string name1, department1;
    long id1;
    char gender1;

   

    Student s1;
    cout << "student 1 " << endl;

    cout << "enter your name " << endl;
    getline(cin, name1);

    cout << "enter your student id must be 9 digit     " << endl;
    cin >> id1;

    cout << "enter your gender" << endl;
    cin >> gender1;

    cout << "enter your department in Capital letter " << endl;
    cin >> department1;

    s1.setname(name1);
    s1.setstdID(id1);
    s1.setGender(gender1);
    s1.setDepartment(department1);

    cout << endl;

    string name2, department2;
    long id2;
    char gender2;

    Student s2;
    cout << "student 2" << endl;

    cout << "enter your name "<< endl;
    getline(cin,name2);

    cout << "enter your student id must be 9 digit" << endl;
    cin >> id2;
    cout << "enter your gender" << endl;
    cin >> gender2;
    cout << "enter your department in Capital letter" << endl;
    cin >> department2;
    cout<<endl;

    s2.setname(name2);
    s2.setstdID(id2);
    s2.setGender(gender2);
    s2.setDepartment(department2);

    cout << s1.toString() << endl;
    cout << endl;
    cout << s2.toString() << endl;
    return 0;
}
