#include<iostream>
using namespace std;

int CountL(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'l')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    iRet = CountL(Arr);
    cout<<"String contains l : "<<iRet<<" times"<<endl;

    return 0;
}
