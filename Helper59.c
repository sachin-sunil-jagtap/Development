#include "Header59.h"

ULONG Power(int iNo1, int iNo2)
{
    ULONG lMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        lMult = lMult * iNo1;
    }
    return lMult;
}