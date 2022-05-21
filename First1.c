#include<stdio.h>

extern int no;  // Declaration of variable

int main()
{
    printf("%d\n",no);

    return 0;
}

// gcc  First.c  Second.c   -o   Myexe
// ./Myexe      For Linux or MACOS
// Myexe        For windows