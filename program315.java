import java.io.*;
import java.util.*;

class program315
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            str = str.toLowerCase();

            char arr[] = str.toCharArray();
            int Frequency[] = new int[26];
            int i = 0;

            for(i = 0; i < arr.length; i++)
            {
                Frequency[arr[i] - 'a']++;
            }

            int iMax = 0;
            int iPos = 0;
           for(i = 0; i < Frequency.length; i++)
           {
                    if(Frequency[i] > iMax)
                    {
                        iMax = Frequency[i];
                        iPos = i;
                    }
           }

           System.out.println((char)(iPos + 'a') + " occurs " + iMax +" number of times in the word");
      }
}