#include<iostream>
using namespace std;

void Matrix(int **Arr, int Rows, int Columns)
{
    int sum = 0;

    for(int i = 0; i < Rows; i++)
    {
        sum = sum + Arr[i][i];
    }

    cout << "Diagonal Sum = " << sum << endl;
}

int main()
{
    int iRow = 0, iCol = 0;

    cout << "Enter the Number of Rows: ";
    cin >> iRow;

    cout << "Enter the Number of Columns: ";
    cin >> iCol;

    // Create 2D dynamic array
    int** Arr = new int*[iRow];
    for(int i = 0; i < iRow; i++)
    {
        Arr[i] = new int[iCol];
    }

    cout << "Enter the Elements:\n";
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cin >> Arr[i][j];
        }
    }

    cout << "\nMatrix Elements are:\n";
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }

    Matrix(Arr , iRow , iCol);

    // Free memory
    for(int i = 0; i < iRow; i++)
    {
        delete[] Arr[i];
    }
    delete[] Arr;

    return 0;
}
