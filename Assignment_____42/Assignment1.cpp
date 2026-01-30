#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    static int No = 5;
    if(i <= iNo)
    {
        cout << No <<"\t*\t";
        i++;
        No--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout <<"Enter the Number :";
    cin >>iValue;

    Display(iValue);
    cout <<"\n";

    return 0;
}