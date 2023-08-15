#include<iostream> 
using namespace std;
// main method start here 

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >=1; j--)
        {
            if (i >= j)
				cout << "*";
			else
				cout << " ";
        }
        cout << endl;
        
        
    }
    
    system("pause");
    return 0; 
}