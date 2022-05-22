import java.lang.*;

class Arithematic
{
    public int No1;
    public int No2;

    Arithematic(int a, int b)
    {
        No1 = a;
        No2 = b;
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }
}

class SpecificOOP
{
    public static void main(String arg[])
    {
        Arithematic obj = new Arithematic(10,11);
        int ret = 0;
        ret = obj.Addition();
        System.out.println("Addition is : "+ret);
    }
}