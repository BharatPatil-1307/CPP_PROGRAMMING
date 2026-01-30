#include<iostream>
using namespace std;

int SummationDigit(int iNo)
{
    static int i = 1;
    int iDigit = 0;

    iDigit = iNo % 10;
    if(i <= iNo)
    {
        iDigit = iDigit + iNo;
        i++;
        SummationDigit(iNo);
        iNo = iNo / 10;
    }
    return iDigit;
}

int main()
{
    int iValue = 0 , iRet = 0;

    cout <<"Enter the Number :";
    cin >>iValue;

    iRet = SummationDigit(iValue);
    cout <<"Summation is : "<< iRet <<"\n";

    return 0;
}