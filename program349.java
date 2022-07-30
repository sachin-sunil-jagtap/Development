import java.lang.*;
import java.util.*;

class program349
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        long iNo = sobj.nextLong();

        System.out.println("Enter starting point");
        int iStart = sobj.nextInt();

        System.out.println("Enter ending point");
        int iEnd = sobj.nextInt();

        long iMask1 = 0xffffffff;
        long iMask2 = 0xffffffff;
        long iMask = 0;

        iMask1 = iMask1 << (iStart-1);
        iMask2 = iMask2 >> (32 - iEnd);

        iMask = iMask1 & iMask2;

        System.out.println(iMask);

        long iResult = 0;
        iResult = iNo & iMask;

        if(iResult == iNo)
        {
            System.out.println("Bits are on");
        }
        else
        {
            System.out.println("Bits are off");
        }
    }
}



/*
        iStart = 9
        iEnd = 16


        00000000    00000000    00000000    00000000

        00000000    00000000    11111111    00000000            // Mask





iMask1      11111111    11111111    11111111    11111111                iMask1 = iMask1 << (iStart-1);
iMask2      11111111    11111111    11111111    11111111                iMask2 = iMask2 >> (32 - iEnd);

iMask1      11111111    11111111    11111111    00000000
iMask2      00000000    00000000    11111111    11111111        &
--------------------------------------------------------------------------
iMask       00000000    00000000    11111111    00000000

iResult = iNo & iMask;

*/












