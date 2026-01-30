#include<iostream>
using namespace std;

int Factors(int No)
{
    if(No == 0)
    {
        return 1;
    }
    else
    {
        return No * Factors(No -1);
    }

}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number :";
    cin >> iValue;

    iRet = Factors(iValue);
    cout << "Factorial is :" << iRet <<"\n";

    return 0;
}