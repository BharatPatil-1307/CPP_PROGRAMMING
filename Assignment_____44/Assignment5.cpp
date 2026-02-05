#include<iostream>
using namespace std;

void SwapRows(int **Arr, int Rows, int Columns)
{
    for(int i = 0; i < Rows - 1; i = i + 2)   // jump by 2
    {
        for(int j = 0; j < Columns; j++)
        {
            // swap consecutive rows
            int temp = Arr[i][j];
            Arr[i][j] = Arr[i+1][j];
            Arr[i+1][j] = temp;
        }
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

    cout << "\nMatrix before swapping:\n";
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }

    SwapRows(Arr, iRow, iCol);

    cout << "\nMatrix after swapping consecutive rows:\n";
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }

    // free memory
    for(int i = 0; i < iRow; i++)
    {
        delete[] Arr[i];
    }
    delete[] Arr;

    return 0;
}
