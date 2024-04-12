// preprocessor
#include <iostream>
using namespace std;


int maxElment(int arr[], int size)
{
  int max = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}


// main start here ...
int main()
{
  int size;
  cout << "enter the size of the array " << endl;
  cin >> size;
  int *arr = new int[size]; // create dynamic array

  for (int i = 0; i < size; i++)
  {
    cout << "enter the element " << i + 1 << endl;
    cin >> arr[i];
  }

  int max = maxElment(arr, size);
  cout << "maximum element of the array :" << max << endl;
  return 0;
 
}