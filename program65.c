#include<stdio.h>

void Display(int ptr[])
{
    int iCnt = 0;
    printf("Elements of array are : \n");
    //      1               2           3
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",*ptr);    // 4
        ptr++;
    }
}

int main()
{
    auto int Arr[5];
    register int iCnt = 0;

    printf("Enter elements : \n");
    
   for(iCnt = 0; iCnt < 5; iCnt++ )
   {
        scanf("%d",&Arr[iCnt]);
   }

    Display(Arr);       // Display(100);
    return 0;
}