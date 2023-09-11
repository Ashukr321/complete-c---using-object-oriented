// create the array  of the string in the cpp
#include <iostream>
using namespace std;
void printName (string name[]){
    for(int i = 0 ; i<name->length(); i++){
        cout<<name[i]<<" ,";
    }
}
// main methods start here
int main()
{
    // create the string of array with size n
    int n;
    cout << "enter  the size of the array " << endl;
    cin >> n;

    string stName[n];

    for(int i = 0; i<n;i++){
        cout<<"enter  name :"<< i <<endl;
        string name;
        cin>>name;
        stName[i]= name;
    }

    // print the name of the string array 
   printName(stName);
   
   return 0;


}