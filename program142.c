#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0,iRet = 0;

    printf("Enter number of elements \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) *iLength);

    printf("Enter the values of array\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Sumation(ptr,iLength);

    printf("Addition is : %d\n",iRet);

    free(ptr);
    return 0;
}