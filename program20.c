
#include<stdio.h>

void Display(int iNo)
{
        int iCnt = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        //       1                2             3
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("%d\n",iCnt);        // 4
        }
}

////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);    // Display(4);

    return 0;
}