#include<iostream>
using namespace std;

int WhiteSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[50];
    int iRet = 0;

    cout << "Enter the String :";
    cin.getline(arr, 50);

    iRet = WhiteSpace(arr);
    cout << "Number of WhiteSpace is :" << iRet <<"\n";

    return 0;
}