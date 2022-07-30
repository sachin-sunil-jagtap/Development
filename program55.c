// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

/*
    START
        Accept one number as no1
        Acccept another number as no2

        Create one variable as Mult
        Set the value 1 in the variable Mult

        Create one countrer as cnt
        Set the counter to 1

        LOOP:
        Itreate till the counter is less than or equal to no2
            mult = Mult * no1
            increment the counter by 1
       Goto LOOP

        Display the value of mult
    END

    no1 = 2
    no2 = 4
    mult = 1

    mult = mult * no1
    mult = mult * no1
    mult = mult * no1
    mult = mult * no1

    for(cnt = 1; cnt <= no2; cnt++)
    {
        mult = mult * no1;
    }
*/

#include<stdio.h>

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

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto int iRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);

    printf("Enter power : \n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1, iValue2); // Power(3,4)

    printf("Result is : %d\n",iRet);

    return 0;
}



