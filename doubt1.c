#include<stdio.h>

int main()
{
    double d = 3.10;
    float f = 6.10;
    int Arr[3] = {21,43,54};
    int x = 0;

    float Brr[4] = {98.3,4.3};
    int i = 0;

    printf("%d\n",Brr[i]);
    i++;
    printf("%d\n",Brr[i]);

    x = Arr[2] + 21 + Arr[0];

    x++;    // 97

    printf("%d\n",x);

    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(f));

    printf("%d\n",sizeof(11));      // 4
    printf("%d\n",sizeof(6.10));    // 8
    printf("%d\n",sizeof(6.10f));   // 4

    printf("%d\n",sizeof d);
    return 0;
}


/*
char Arr[50];

printf("Enter your name : ");
scanf("%s",Arr);
scanf(" %[^'\n']s",Arr);
*/








