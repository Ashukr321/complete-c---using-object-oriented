//Deterministic Finite Automata program for accepting strings starting and ending with 'a'

#include<iostream> 
#include<cstring>
using namespace std;

int main(){
    // create the char string 
    char str[100];
    cout << "enter your string"<<endl;
    cin>>str;
    int l = strlen(str);// strlen gives the length of the string 
    if (str[0]=='a'&&str[l-1]=='a')
    {
       cout<<"Accepted"<<endl;
    }else{
        cout<<"Not Accepted"<<endl;
    }
    system("pause");
    return 0; 
}