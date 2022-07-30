#include<stdio.h>

// 6
// a    b   c   d   e   f

void Display(int iNo)
{
    static int i = 0;

    if(i < iNo)
    {
        i++;
        Display(iNo);
        printf("%c\t",'a'+i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}