#include <stdio.h>

int MaxDigit(int No)
{
    if (No == 0)
    return 0;

    int iDigit = No % 10;
    int iRecMax = MaxDigit(No / 10);

    return (iDigit > iRecMax) ? iDigit : iRecMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    if(iValue < 0) 
    {
        iValue = -iValue;
    }

    iRet = MaxDigit(iValue);

    printf("Max Digit is: %d\n", iRet);

    return 0;
}