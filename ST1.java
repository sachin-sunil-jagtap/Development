import java.lang.*;
import java.util.*;

class ST1
{
    public static void main(String arg[])
    {
        Stack <Integer>obj = new Stack<Integer>();

        obj.push(11);
        obj.push(22);
        obj.push(33);
        obj.push(44);

        Iterator iob = obj.iterator();
        while(iob.hasNext())
        {
            System.out.println(iob.next());
        }

        System.out.println("Poped elemenst are");
        int no = 0;
        no = obj.pop();
        System.out.println(no);

        no = obj.pop();
        System.out.println(no);
    }
}