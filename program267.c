#include<stdio.h>

// 6
// a    b   c   d   e   f

void Display(int iNo)
{
    int i = 0;
    char ch = 'a';

    while(i < iNo)
    {
        printf("%c\t",ch);
        ch++;
        i++;
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