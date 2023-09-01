#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Read the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declare a 2D array
    int arr[rows][cols];

    // Read elements into the array
    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    int choice;
    do {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Sum of all elements\n";
        cout << "2. Print the matrix\n";
        cout << "3. Print the elements of principal diagonal\n";
        cout << "4. Print the sum of elements in principal diagonal\n";
        cout << "5. Exit\n";
        
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: // Sum of all elements
                int sum = 0;
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        sum += arr[i][j];
                    }
                }
                cout << "Sum of all elements: " << sum << endl;
                break;

            case 2: // Print the matrix
                cout << "Matrix:" << endl;
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        cout << arr[i][j] << "\t";
                    }
                    cout << endl;
                }
                break;

            case 3: // Print the elements of principal diagonal
                cout << "Elements of principal diagonal:" << endl;
                for (int i = 0; i < min(rows, cols); i++) {
                    cout << arr[i][i] << " ";
                }
                cout << endl;
                break;

            case 4: // Print the sum of elements in principal diagonal
                int diagonalSum = 0;
                for (int i = 0; i < min(rows, cols); i++) {
                    diagonalSum += arr[i][i];
                }
                cout << "Sum of elements in principal diagonal: " << diagonalSum << endl;
                break;

            case 5: // Exit
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option (1-5)." << endl;
        }
    } while (choice != 5);

    return 0;
}
