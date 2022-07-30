import java.lang.*;
import java.util.*;
import java.io.*;

class program292
{
    public static void main(String arg[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please direcory / folder name");
            String foldername= sobj.nextLine();

            File dobj = new File(foldername);

            File allfiles[] = dobj.listFiles();

            for(int i = 0; i < allfiles.length; i++)
            {
                    System.out.println(allfiles[i].getName());
            }
        }
        catch(Exception obj)
        {

        }

    }
}