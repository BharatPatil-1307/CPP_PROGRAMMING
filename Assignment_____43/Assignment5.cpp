#include<stdio.h>

int ReversDigit(int No)
{
    int iRev = 0, iDigit = 0;

    while(No != 0)
    {
        iDigit = No % 10;
        iRev = (iRev * 10) + iDigit;
        No = No / 10;
    }

    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = ReversDigit(iValue);

    printf("Revers Digits are : %d\n",iRet);
    return 0;
}