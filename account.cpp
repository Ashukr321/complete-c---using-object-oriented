#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee
{

private:
    int employeeID;
    string employeeName;
    string employeeDepartment;

public:
    // Constructors with default values
    // defalut contructor 

    Employee() : employeeID(0), employeeName("#"), employeeDepartment("#") {}

    Employee(int id, const string &name, const string &department) : employeeID(id), employeeName(name), employeeDepartment(department) {}

    // Accessor methods
    int getEmployeeID() const
    {
        return employeeID;
    }

    string getEmployeeName() const
    {
        return employeeName;
    }

    string getEmployeeDepartment() const
    {
        return employeeDepartment;
    }

    // Mutator method to update the employee's name
    void setEmployeeName(const string &name)
    {
        employeeName = name;
    }
    

    // Display employee details
    void display() const
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee Department: " << employeeDepartment << endl;
    }

};

int main()
{

    vector<Employee> employees;

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "a. Create new Employee record" << endl;
        cout << "b. Update name based on ID" << endl;
        cout << "c. Print All Employees" << endl;
        cout << "d. Exit" << endl;
        cout << "Enter your choice: ";
        char choice;
        cin >> choice;

        switch (choice)
        {
        case 'a':
        {
            int id;
            string name, department;
            cout << "Enter Employee ID: ";
            cin >> id;
            cout << "Enter Employee Name: ";
            cin >> name;
            cout << "Enter Employee Department: ";
            cin >> department;
            employees.push_back(Employee(id, name, department));
        }
        break;
        case 'b':
        {
            int searchID;
            cout << "Enter Employee ID to update name: ";
            cin >> searchID;
            bool found = false;
            for (Employee &emp : employees)
            {
                if (emp.getEmployeeID() == searchID)
                {
                    string newName;
                    cout << "Enter new Employee Name: ";
                    cin >> newName;
                    emp.setEmployeeName(newName);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Employee not found." << endl;
            }
        }
        break;
        case 'c':
            cout << "Employee List:" << endl;
            for (const Employee &emp : employees)
            {
                emp.display();
                cout << endl;
            }
            break;
        case 'd':
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
