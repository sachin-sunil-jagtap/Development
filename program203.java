import java.lang.*;
import java.util.*;

//              0   0   1   0   1   0   1   1       iNo
//              0   0   0   0   1   0   0   0       iMask
//-------------------------------------------
//              0   0    1  0   0   0   1   1       iResult


//              0   0   1   0   0   0   1   1       iNo
//              0   0   0   0   1   0   0   0       iMask
//-------------------------------------------
//              0   0   1   0   1   0   1   1       iReult


//  0000    0000    0000    0000    0010    0000    0000    0000
//      0       0           0         0          2          0           0       0
class Bitwise
{
        public int ToggleBit(int iNo, int iPos)
        {
            int iMask = 0X00000001;
            int iResult = 0;

            iMask = iMask << (iPos-1);

            iResult = iNo ^ iMask;
            return iResult;
        }
}

class program203
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        System.out.println("Enter position ");
        int pos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.ToggleBit(value,pos);
        System.out.println("Updated number is : "+iRet);
    }
}

/*
Decimal       Hexadecimal           Binary
0                      0                        0000
1                       1                       0001
2                       2                       0010
3                       3                       0011
4                       4                       0100
5                       5                       0101
6                       6                       0110
7                       7                       0111
8                       8                       1000
9                       9                       1001
10                      A                      1010
11                      B                      1011
12                      C                       1100
13                      D                      1101
14                      E                      1110
15                      F                       1111
*/