import java.lang.*;
import java.util.*;

class Array
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements");

        for(int i=0;i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements from array are :");

        for(int i=0;i < Arr.length; i++)
        {
           System.out.println(Arr[i]);
        }
    }
}

class Searching extends Array
{
    public Searching(int iSize)
    {
        super(iSize);
    }

    public int BiDirectionalSearch(int iNo)
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        int iPos = -1;

        while(iStart <= iEnd)
        {
            if(Arr[iStart] == iNo)
            {
                iPos = iStart;
                break;
            }
            if(Arr[iEnd] == iNo)
            {
                iPos = iEnd;
                break;
            }
            iStart++;
            iEnd--;
        }
        return iPos;
    }

    public int LinearSearch(int iNo)
    {
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                break;
            }
        }
        if(i == Arr.length)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }

    public int BinarySearch(int iNo)
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        int iMiddle = 0;

        while(iStart <= iEnd)
        {
            iMiddle = (iStart + iEnd)/2;

            if(Arr[iMiddle] == iNo)
            {
                break;
            }
            if(iNo > Arr[iMiddle])
            {
                iStart = iMiddle+1;
            }
            else if(iNo < Arr[iMiddle])
            {
                iEnd = iMiddle - 1;
            }
        }

        if(Arr[iMiddle] == iNo)
        {
            return iMiddle;
        }
        else
        {
            return -1;
        }

    }
}

class program375
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of array : ");
            int size = sobj.nextInt();

            Searching aobj = new Searching(size);
            aobj.Accept();
            aobj.Display();

            System.out.println("Enter the element that you want to search");
            int iValue = sobj.nextInt();

            int iRet = aobj.BinarySearch(iValue);
            if(iRet == -1)
            {
                System.out.println("There is no such element");
            }
            else
            {
                System.out.println("Element is there in the array at index : "+iRet);
            }
    }
}