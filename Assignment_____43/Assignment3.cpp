#include<iostream>
using namespace std;

int SmallCharecter(char *str)
{
    if(*str == '\0')  
    {
        return 0;
    }

    if((*str >= 'a') && (*str <= 'z'))
    {
        return 1 + SmallCharecter(str + 1); 
    }
    else
    {
        return SmallCharecter(str + 1);
    }
}

int main()
{
    char arr[50];
    int iRet = 0;

    cout << "Enter the String : ";
    cin.getline(arr, 50);

    iRet = SmallCharecter(arr);
    cout << "Number of Small Charecters is : " << iRet << "\n";

    return 0;
}
