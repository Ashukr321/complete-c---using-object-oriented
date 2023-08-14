// calculate the greatest number among three input number 
#include<iostream>
using namespace std;

// main method start here  

int main(){
    //create the local variables 
    float a , b, c;
    cout<<"enter the 3 numebr :"<<endl;
    cin>>a >>b >>c ;
    if( (a > b) && (a > c)){
        cout<< "the largest is "<<a << endl;

    }
    if (b >= a && b >= c){
cout << "The greatest number is " << b << ";" << endl;
    }else if (c >= a && c >= b)
		cout << "The greatest number is " << c << ";" << endl;
	else if (a == b == c)
		cout << "All numbers are equal." << endl;
    return 0; 
}