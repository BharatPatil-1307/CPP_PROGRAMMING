#include<iostream>
using namespace std;

int Strlen(char *str)
{
    int i = 0;
    while(*str != 0)
    {
        i++;
        str++;
    }
    return i;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout << "Enter the String :";
    cin >> arr;

    iRet = Strlen(arr);
    cout << "String is :" << iRet <<"\n";

    return 0;
}