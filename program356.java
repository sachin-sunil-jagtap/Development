import java.lang.*;
import java.util.*;

class program356
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        HashMap<Character, Integer> hobj = new HashMap<>();
        int Frequency = 0;

        for(char ch : Arr)
        {
                if(hobj.containsKey(ch))
                {
                    Frequency = hobj.get(ch);
                    hobj.put(ch, Frequency + 1);
                }
                else
                {
                    hobj.put(ch,1);
                }
        }

        Set<Character> setobj = hobj.keySet();
        System.out.println(setobj);
    }
}
