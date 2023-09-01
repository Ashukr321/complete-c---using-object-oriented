#include <iostream>
using namespace std;
// class based modularisation 

int main()
{
    int rows, cols;

    // Read the number of rows and columns
    cout << "Enter the number of rows: " << endl;
    cin >> rows;
    cout << "Enter the number of columns: " << endl;
    cin >> cols;
    cout << endl;
    // create the matrix 2D
    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        cout << "enter the elements: " << i << " rows" << endl;
        // inner loop for the col
        for (int j = 0; j < cols; j++)
        {
            int data;
            cout << "enter your " << j << " element " << endl;
            cin >> data;
            arr[i][j] = data;
        }
        cout << endl;
    }

    // PRINT THE 2D ARRAY
    for (int i = 0; i < rows; i++)
    {
        // inner loop for the col
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }

    // sum of the all the elements of  the matrix
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "\nSum of All Elements : " << sum << endl;

    cout << endl;
    cout << "principle diagonal matrix " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    cout << endl;

    int sum2 = 0;

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                sum2 += arr[i][j];
            }
        }
    }

    cout<<"sum of the principle diagonal matrix : " << sum2 << endl;

    cout <<"congratulations  you do it 😎😎😎" << endl;
    return 0;
}
