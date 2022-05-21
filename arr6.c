#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("%d\n",Arr[0]);      // 10
    printf("%d\n",Arr[4]);      // 50
    printf("%d\n",Arr);         // 100
    printf("%d\n",&Arr);        // 100
    printf("%d\n",&(Arr[0]));       // 100
    printf("%d\n",Arr + 1);     // 104
    printf("%d\n",(&Arr) + 1);  // 120
    printf("%d\n",sizeof(Arr));     // 20
    printf("%d\n",sizeof(Arr[2]));  //4
    printf("%d\n",Arr[2]);         //30
    printf("%d\n",*(Arr+2));         //
    printf("%d\n",*(2+Arr));        //
    printf("%d\n",2[Arr]);         //

    return 0;
}









/*



1                    Arr[2];                     30


2                    *(Arr + 2)              *(100 + 2)              *(108)          30


3                   *(2 + Arr)              *(2 + 100)              *(108)          30


4                      2[Arr]                 30


*/







