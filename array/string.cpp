#include <iostream>
using namespace std;

int main()
{
    // create the string
    string name = "Ashutosh kumar ";
    // some important string methods
    cout << name.size();
    cout << endl;
    // append() this is used to add new string in the exiting string

    string str2 = "singh";
    string str3 = name.append(str2);
    cout << "full name  is " << str3 << endl;

    // substring methods in the string
    // this is used for the extracting the string from the exiting string
    string str4 = str3.substr(3, 7);// 7 unit count from the 3 index not from the 0 

    cout << "full name is " << str4 << endl;

    //replace methods 
    // replace methods is used for the replace the protion of the string 
    string str5 = str3.replace(3,7,"ankit");
    cout<<str5<<endl;// this replace the the range of portion of the the  string 
      

    // empty 
    cout<<name.empty()<<endl;// 0 for false 


    // exrase () this is for the remove the character from the string 
    string data = name.erase(3,6);
    cout<<data<<endl;
     return 0;

}