// calculate the leap year 
#include<iostream>
using namespace std;

// main methods start here 

int main(){
    int year ;
    cout << "Enter a Year: ";
	cin >> year; // take the year input 
    // logic year %4==0 && year %100==0  then year is a leap year 
    
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "Given " << year << " year is a leap." << endl;
			}
			else
			{
				cout << "Given " << year << " year isn't a leap." << endl;
			}
		}
		else
		{
			cout << "Given " << year << " year is a leap year." << endl;
		}
	}
	else
	{
		cout << "Given " << year << " year isn't a leap." << endl;
	}
	system("pause");
    return 0; 
}