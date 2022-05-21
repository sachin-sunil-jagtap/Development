#include<stdio.h>

int i = 10;     // Global variable defination

extern int j;   // VAriable delaration

extern void fun();

extern int no;

int main()
{
    printf("Inside main\n");

    printf("Value of i is : %d\n",i);
    printf("Value of j  is : %d\n",j);
    printf("%d",no);
    fun();
    
    return 0;
}