#include<stdio.h>

int main()
{
    int No1 = 10;

    const int No2 = 10;

    No1++;  // Allowed
    // No2 ++;  Not Allowed

    No1 = 20;   // Allowed
    // No2 = 20;

    return 0;
}