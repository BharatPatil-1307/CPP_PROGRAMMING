#include <stdio.h>

int SmallDigit(int No)
{
    // Base case: single digit
    if (No < 10)
    {
        return No;
    }

    int iDigit = No % 10;
    int iRecMin = SmallDigit(No / 10);

    return (iDigit < iRecMin) ? iDigit : iRecMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    if (iValue < 0)
    {
        iValue = -iValue;
    }

    iRet = SmallDigit(iValue);

    printf("Small Digit is: %d\n", iRet);

    return 0;
}
