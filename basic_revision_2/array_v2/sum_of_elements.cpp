// preprocessor
#include <iostream>
using namespace std;

// main start here ...
int main()
{
  int n;
  int sum = 0;
  cout << "enter the number of elements" << endl;
  cin >> n;

  int arr[n];// here we must to provide the size of the array 
  for (int i = 0; i < n; i++)
  {
    int n;
    cout << "enter your " << i + 1 << "element" << endl;
    cin >> n;
    arr[i] = n;
  }

  for (
      int i = 0; i < n; i++)
  {
    sum+=arr[i];
    cout << arr[i] << endl;
  }

  cout<<"total sum of the Enter Your Number : "<<sum<<endl;

  return 0;
}