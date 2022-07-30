import java.lang.*;
import java.util.*;
import java.io.*;

class program300
{
    public static void main(String arg[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter packed file name");
            String PackFileName = sobj.nextLine();

            File fobj = new File(PackFileName);

            FileInputStream fiobj = new FileInputStream(fobj);
            byte Headerarray[] = new byte[100];

            String HeaderString = null;
            String tokens[];

            int ret = 0;

            while((ret = fiobj.read(Headerarray,0,100)) > 0)
            {
                      HeaderString = new String(Headerarray);
                      tokens = HeaderString.split(" ");

                      File fobjnew=new File(tokens[0]);
                      boolean bobj = fobjnew.createNewFile();

                      int size = Integer.parseInt(tokens[1]);
                      byte dataarray[] = new byte[size];

                      fiobj.read(dataarray,0,size);

                     FileOutputStream foobj = new FileOutputStream(fobjnew);
                     foobj.write(dataarray,0,size);
            }
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}