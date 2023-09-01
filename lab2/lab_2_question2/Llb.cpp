#include "Llb.h"
#include <iostream>
using namespace std;
// constructor
Lbb::Lbb(int a[], int m)
{
    n = m;
    for (int i = 0; i < m; i++)
    {
        this->arr[i] = a[i];
    }
}

void Lbb::printArray()
{
    for (int i = 0; i < n; i++)
    {
        cout << Lbb::arr[i] << " ";
    }
}

bool Lbb::linearSearch(int key)
{
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (Lbb::arr[i] == key)
        {
            flag = true;
            return flag;
        }
    }

    return flag;
}

int Lbb::binarySearch(int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (Lbb::arr[mid] == key)
        {
            return mid;
            break;
        }
        else if (Lbb::arr[mid] < key)
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
void Lbb::bubbleSort()
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

