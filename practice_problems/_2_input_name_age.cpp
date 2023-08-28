#include<iostream>
using namespace std;

//creating the class Employee 
class Employee {
    char name[30];
    int age ;
    public :
    void getData(void);
    void putData(void);
};

// initialisation of the data function 
void Employee::getData(void){
    cout << "enter your name and age";
    cin>>name>>age;
}

void Employee::putData(void){
    cout << name<<"\t"<<age<<endl;
}

int main(){
    //create the object of the emp
    Employee e[5];
    int i ;
    for ( i = 0; i <= 5; i++)
    {
        e[i].getData();
    }
    
    //display the data 
    for (int i = 0; i <= 5; i++)
    {
        e[i].putData();
    }
    
    return 0;
}