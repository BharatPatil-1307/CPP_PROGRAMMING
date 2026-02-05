#include<iostream>
using namespace std;

int MaxDiagona(int **Arr, int Rows, int Columns)
{
    int iMax = Arr[0][0];

    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Columns; j++)
        {
            if(i == j || (i + j) == (Columns - 1))   // both diagonals
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
    }
    return iMax;
}

int main()
{
    int iRow = 0, iCol = 0 iRet = 0;

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

    iRet = MaxDiagona(Arr, iRow, iCol);

    cout <<"Both Diagnoal Max number is :" << iRet <<"\n";

    // free memory
    for(int i = 0; i < iRow; i++)
    {
        delete[] Arr[i];
    }
    delete[] Arr;

    return 0;
}
