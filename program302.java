import java.io.*;
import java.util.*;

class program302
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            char arr[] = str.toCharArray();
            int iCnt = 0;

            for(int i = 0; i < arr.length; i++)
            {
                if((arr[i] >='a') && (arr[i] <= 'z'))   // if(*str >= 'a')
                {
                    iCnt++;
                }
            }

            System.out.println("Number of small case letters are : "+iCnt);
    }
}