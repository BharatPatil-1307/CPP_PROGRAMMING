#include<iostream>
using namespace std;

void ColumnSum(int **Arr, int Rows, int Columns)
{
    for(int j = 0; j < Columns; j++)   // column loop
    {
        int sum = 0;

        for(int i = 0; i < Rows; i++)  // row loop
        {
            sum = sum + Arr[i][j];
        }

        cout << "Sum of Column " << j+1 << " = " << sum << endl;
    }
}

int main()
{
    int iRow = 0, iCol = 0;

    cout << "Enter number of rows: ";
    cin >> iRow;

    cout << "Enter number of columns: ";
    cin >> iCol;

    // dynamic memory
    int **Arr = new int*[iRow];
    for(int i = 0; i < iRow; i++)
    {
        Arr[i] = new int[iCol];
    }

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cin >> Arr[i][j];
        }
    }

    cout << "\nMatrix is:\n";
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nAddition of each column:\n";
    ColumnSum(Arr, iRow, iCol);

    // free memory
    for(int i = 0; i < iRow; i++)
    {
        delete[] Arr[i];
    }
    delete[] Arr;

    return 0;
}
