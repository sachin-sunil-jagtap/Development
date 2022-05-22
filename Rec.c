#include<stdio.h>

void DisplayI(int no)
{
    int i = 1;
    while(i <= no)
    {
        printf("*\n");
        i++;
    }
}

void DisplayR(int no)
{
    static int i = 1;
    if(i <= no)
    {
        printf("*\n");
        i++;
        DisplayR(no);       // Recursive call
    }
}

int main()
{
        int value = 3;
        DisplayR(value);
        printf("End of main");
        return 0;
}