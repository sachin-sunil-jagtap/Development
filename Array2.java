import java.lang.*;
import java.util.*;

class Array2
{
    public static void main(String arg[])
    {
            int iCnt = 0;
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter number of elements");
            int size = sobj.nextInt();

            int Arr[] = new int[size];

            System.out.println("Enter the elements of array");
            for(iCnt = 0; iCnt < Arr.length; iCnt++)
            {
                Arr[iCnt] = sobj.nextInt();
            }

            System.out.println("Elements if array are");
            for(iCnt = 0; iCnt < Arr.length; iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }
    }
}