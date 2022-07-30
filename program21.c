
#include<stdio.h>

void Display(int iNo)
{
        int iCnt = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iCnt = 1;               // 1
        //              2
        while(iCnt <= iNo)
        {
                    printf("%d\n",iCnt);        // 4
                    iCnt++;         // 3
        }
}

////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);    // Display(-4);

    return 0;
}