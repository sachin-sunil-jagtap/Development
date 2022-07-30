import java.io.*;
import java.util.*;

class program318
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter first string : ");
            String str1 = sobj.nextLine();

            str1 = str1.toLowerCase();

            char arr[] = str1.toCharArray();
            int Frequency1[] = new int[26];

            System.out.println("Enter second string : ");
            String str2 = sobj.nextLine();

            str2 = str2.toLowerCase();

            char brr[] = str2.toCharArray();
            int Frequency2[] = new int[26];

            if(str1.length() != str2.length())
            {
                System.out.println("Strings are not anagram as lengths are different");
                return;
            }

            int i = 0;

            for(i = 0; i < arr.length; i++)
            {
                Frequency1[arr[i] - 'a']++;
                Frequency2[brr[i] - 'a']++;
            }

            for(i = 0; i < Frequency1.length; i++)
            {
                if(Frequency1[i] != Frequency2[i])
                {
                    break;
                }
            }

            if(i == 26)
            {
                System.out.println("Strings are anagram");
            }
            else
            {
                System.out.println("Strings are not anagram");
            }
     }
}