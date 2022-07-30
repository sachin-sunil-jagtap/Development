import java.io.*;
import java.util.*;

class program312
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            char arr[] = str.toCharArray();
            int Frequency[] = new int[26];
            int i = 0;

            for(i = 0; i < arr.length; i++)
            {
                Frequency[arr[i] - 'a']++;
            }

           for(i = 0; i < Frequency.length; i++)
           {
                System.out.println(Frequency[i]);
           }
      }
}