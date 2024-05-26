// preprocessor
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ",";
  }
}

int binarySearch(int arr[], int size, int target)
{

  int low = 0;
  int high = size - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}
// main start here ...
int main()
{
  int size;
  int target;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element in the sorted manner  at index:  " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "Enter the target element : " << endl;
  cin >> target;
  printArray(arr, size);
  int targetElementIndex = binarySearch(arr, size, target);
  if (targetElementIndex != -1)
  {
    cout << "Target element found at index " << targetElementIndex << endl;
  }
  else
  {
    cout << "Target element not found" << endl;
  }
  return 0;
}

// binary search is the o(log n)
// binary search is work on the sorted array

