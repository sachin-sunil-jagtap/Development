#include<stdio.h>

extern int no;  // Declaration of variable
extern int A;
int main()
{
    printf("%d\n",no);
	printf("%d\n",A);

    return 0;
}

// gcc  First.c  Second.c   -o   Myexe
// ./Myexe      For Linux or MACOS
// Myexe        For windows