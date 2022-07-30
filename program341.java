import java.lang.*;
import java.util.*;

// Input : Hello
/*
H
H   e
H   e   l
H   e   l   l
H   e   l   l   o
H   e   l   l
H   e   l
H   e
H
*/

class program341
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        int i = 0, j = 0;
        
        for( i = 0; i < Arr.length; i++)
        {
            for( j = 0; j <= i; j++)
            {
                System.out.print(Arr[j]+"  ");
            }
            System.out.println();
        }
        for( i = Arr.length-2; i >=0 ; i--)
        {
            for( j = 0; j <= i; j++)
            {
                System.out.print(Arr[j]+"  ");
            }
            System.out.println();
        }

    }
}