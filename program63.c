#include<stdio.h>

int main()
{
    // Arr is one dimentional array
    // which contains 5 elements
    // and each element is of type int
    auto int Arr[5];
    register int iCnt = 0;

    printf("Enter elements : \n");

   for(iCnt = 0; iCnt < 5; iCnt++ )
   {
        scanf("%d",&Arr[iCnt]);
   }


    printf("Elements of array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}