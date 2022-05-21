#include<stdio.h>

// Structure Declaration
struct Demo
{
    int iNo;
    float fValue;
    int iValue;
};
int main()
{
    // Structure object creation
    struct Demo obj;

    // Object initialization
    obj.iNo = 11;
    obj.fValue = 10.11;
    obj.iValue = 21;

    printf("%d\n",obj.iValue);    // 21
    printf("%d\n",sizeof(obj));       // 12
    return 0;
}