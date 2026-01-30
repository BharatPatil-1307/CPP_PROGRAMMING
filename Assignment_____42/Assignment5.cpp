#include<iostream>
using namespace std;

int Mult(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }
    else
    {
        return (iNo  % 10 ) * Mult(iNo / 10);
    }
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;
    cout <<"Enter number : ";
    cin >>iValue;

    iRet = Mult(iValue);
    cout <<iRet <<"\n";

    return 0;
}