// preprocessor

#include <iostream>
using namespace std;

// create the class of the matrix
class Matrix
{
    // create the  instnce or state variables
public:
    int rows, cols;
    // create the  sum variables
    int mSum, dSum;
    // create the matrix 2D
    int *arr[rows][cols];
    
public:

    // create the constructor
    Matrix(int rows, int cols);
    // create the matrix by using this methods
    void setMatrix();
    // PRINT THE 2D ARRAY
    void printMatrix();
    // matrix sum
    void matrixSum();
    // print all pricipal diagonal matrix
    void printPricipalMatrixElement();
    // principal diagonal element sum
    void principalDiagonalEleSum();
    // printing the data
    void printData();
};

// set the matrix rows ans cols
Matrix::Matrix(int rows, int cols)
{
    // use this keywords that refer to the current class object
    this->rows = rows;
    this->cols = cols;
};

// create matrix
void Matrix::setMatrix()
{
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
};

// print the elements of the matrix

void Matrix::printMatrix()
{
    for (int i = 0; i < rows; i++)
    {
        // inner loop for the col
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }
};

// matrix sum
void Matrix::matrixSum()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            this->mSum += arr[i][j];
        }
    }
};

void Matrix::printPricipalMatrixElement()
{
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
};

void Matrix::principalDiagonalEleSum()
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                dSum += this->arr[i][j];
            }
        }
    }
};

// print all data
void Matrix::printData()
{
    cout << "element of the the 2D array " << endl;
    Matrix::printMatrix();
    cout << endl;
    cout << " sum of the all the elements of  the matrix" << endl;
    Matrix::matrixSum();
    cout<<Matrix::mSum<<endl;
    cout << endl;
    cout << "principle diagonal matrix " << endl;
    Matrix::printPricipalMatrixElement();
    cout << endl;
    Matrix::principalDiagonalEleSum();
    cout<<"sum of the principle diagonal matrix : " << Matrix::dSum << endl;

    cout<<"⭐⭐⭐⭐ you  are champ ⭐⭐⭐⭐⭐"<<endl;
    cout<<"code Complted by Ashutosh kumar "<<endl;
    
};


// main methods start here 
int main(){
    int rows , cols;

    cout<<"enter number of row :"<<endl;
    cin>>rows;
    cout <<"enter number of cols :"<<endl;
    cin>>cols;
    // create the object 
    Matrix m(rows,cols);
    m.printData();
}   