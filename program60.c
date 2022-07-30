#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)   // 3    4
{
    int iMult = 1;
    register int iCnt = 0;
    //          1           2                 3
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;       // 4
    }
    return iMult;
}

bool CheckArmstrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0, iDigit = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;

    // Calculate number of digits
    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10;
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
         iSum = iSum + Power(iDigit, iDigCnt);
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int  main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        printf("%d is armstrong number\n",iValue);
    }
    else
    {
        printf("%d is not armstrong number\n",iValue);
    }

    return 0;
}