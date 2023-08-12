// string concatenation 
#include<iostream>
using namespace std;

// main methods start  ....
int main(){
    string fNaem = "Ashutosh";
    string lName = "kumar";
    string  FullName = fNaem.append(lName);
    cout <<FullName<<endl;
    cout <<FullName.length()<<endl;
    cout<<FullName[0]<<endl;
    for (int i = 0; i < FullName.length(); i++)
    {
            cout<<FullName[i]<<endl;

    }

    // manupulate the  string character 
    FullName[0]= 't';
    cout<<FullName<<endl;
    
    return  0 ; 
}

// Access Strings
// You can access the characters in a string by referring to its index number inside square brackets [].

// This example prints the first character in myString:


// Escape character	Result	Description
// \'	'	Single quote
// \"	"	Double quote
// \\	\	Backslash

// these all are the special character in the cpp 
