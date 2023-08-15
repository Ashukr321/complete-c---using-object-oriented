#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5; i += 2)
	{
		for (int j = 3; j >= i; j -= 2)
		{
			cout << " ";
		}

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}