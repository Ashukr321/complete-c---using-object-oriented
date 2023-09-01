#include <iostream>
using namespace std;

class Lbb
{
    
    int *arr;
    int n;

public:
    Lbb(int a[], int m)
    {
        n = m;
        for (int i = 0; i < m; i++)
        {
            this->arr[i] = a[i];
        }
    }

    void printArray()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    bool linearSearch(int key)
    {
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                flag = true;
                return flag;
            }
        }

        return flag;
    }

    // binary search
    int binarySearch(int key)
    {
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == key)
            {
                return mid;
                break;
            }
            else if (arr[mid] < key)
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

    // bubble sort
    void bubbleSort()
    {

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {

                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
       
    }


};

int main()
{

    
    int arr[] = {12, 4, 5, 6, 7, 8, 8};
    int size = sizeof(arr)/sizeof(int);
    Lbb ob(arr, size);
    ob.printArray();
    cout << ob.linearSearch(4) << endl;
    cout << endl;
    cout << ob.binarySearch(7) << endl;

    ob.bubbleSort();

    ob.printArray();

    return 0;
}