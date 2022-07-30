import java.lang.*;
import java.util.*;

class program354
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string");
        String str1 = sobj.nextLine();

        System.out.println("Enter rotated string");
        String str2 = sobj.nextLine();

        if(str1.length() != str2.length())
        {
            System.out.println("Strings are not in rotation");
            return;
        }

        String str3 = str1 + str1;

        if(str3.contains(str2))
        {
              System.out.println("Strings are in rotation");
        }
        else
        {
              System.out.println("Strings are not in rotation");
        }
    }
}
