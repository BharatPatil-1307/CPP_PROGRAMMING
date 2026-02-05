#include<iostream>
using namespace std;

int Frequency(int **Arr, int Rows, int Columns, int No)
{
    int count = 0;

    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Columns; j++)
        {
            if(Arr[i][j] == No)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int iRow = 0, iCol = 0, iValue = 0, iRet = 0;

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

    cout << "Matrix elements are :\n";
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] <<"\t";
        }
        cout <<endl;
    }

    cout << "Enter number to search: ";
    cin >> iValue;

    iRet = Frequency(Arr, iRow, iCol, iValue);

    cout << "Frequency of number is: " << iRet << endl;

    // free memory
    for(int i = 0; i < iRow; i++)
    {
        delete[] Arr[i];
    }
    delete[] Arr;

    return 0;
}
