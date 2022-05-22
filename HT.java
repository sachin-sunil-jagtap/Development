import java.lang.*;
import java.util.*;

class HT
{
    public static void main(String arg[])
    {
        // Integer is key
        // String is value
        Hashtable <Integer, String>obj = new Hashtable<Integer, String>();

        obj.put(11,"Amit");
        obj.put(21,"Piyush");
        obj.put(22,"Mayur");
        obj.put(30,"Sagar");
        obj.put(34,"Dinesh");

        System.out.println("Paduka alya .... : "+obj.get(21));

        System.out.println("Data from hash table");
        Enumeration eobj = obj.keys();

        while(eobj.hasMoreElements())
        {
            System.out.println(obj.get(eobj.nextElement()));
            System.out.println(eobj.nextElement());
        }

    }
}