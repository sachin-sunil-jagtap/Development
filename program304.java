import java.io.*;
import java.util.*;

class program304
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            String newstr = str.replaceAll("\\s+"," ");
            String arr[] = newstr.split(" ");

            System.out.println("Number of words are : "+arr.length);
     }
}