import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class program291
{
    public static void main(String arg[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please enter existing file name");
            String Filename= sobj.nextLine();

            File fobj=new File(Filename);

            System.out.println("Enter new file name to create");
            String newfile = sobj.nextLine();

            File fobjnew=new File(newfile);
            boolean bobj1 = fobjnew.createNewFile();

            if(fobj.exists())
            {
                    FileInputStream fiobj = new FileInputStream(fobj);
                    FileOutputStream foobj = new FileOutputStream(fobjnew);

                    byte buffer[] = new byte[100];
                    int ret = 0;

                    while((ret = fiobj.read(buffer)) != -1)
                    {
                            foobj.write(buffer,0,ret);
                    }
            }
            else
            {
                System.out.println("There is no such file");
            }
        }
        catch(IOException obj)
        {
            System.out.println(obj);
        }
    }
}