// 1
#include <iostream>
using namespace std;

class Employee
{
    // public
public:
    int eid;
    float sallary;
    string name;
};

// create the  another class that inherit the class employee base class
class Employees : public Employee
{

    // Create the constructor that set the value of the id sallary and name
    public:
    Employees(int id, int sallary, string name)
    {
        this->name = name;
        this->eid = id;
        this->sallary = sallary;
    }

};




int main()
{
    // create the instance variables
   
    // create the array of the five emps
    Employees *emp[1];

    for (int i = 0; i < 1; i++)
    {

        cout<<"enter the details of  employe "<<i+1<<endl;
        float sallary;
        string name;
        int id;
        cout << "enter your name" << endl;
        cin >> name;
        cout << "Enter you Id " << endl;
        cin >> id;
        cout << "Enter Your Sallary" << endl;
        cin >> sallary;
        emp[i] = new Employees (id ,sallary ,name);
        cout<<endl;

    }

    for (int i = 0; i < 1; i++)
    {
        cout<<"print the details of emplooy "<<i+1<<endl;
        cout<<emp[i]->name<<"\n"<<emp[i]->eid<<"\n"<<emp[i]->sallary<<endl;
        cout<<endl;
    }
   
    
    return 0;
}

