import java.lang.*;

final class Base
{
    public void fun()
    {
        System.out.println("Base fun");
    }
}

class Derived
{
    public Base bobj = new Base();       // Composition

    public void gun()
    {
        System.out.println("Derived gun");
    }
}
class Final4
{
    public static void main(String a[])
    {
        Derived dobj = new Derived();
        dobj.bobj.fun();
        dobj.gun();
    }
}

/*
java.lang

 class System
{
    public static PrintStream out = new PrintStream();

}

class PrintStream
{
    public void println(String str)
    {

    }
}

System.out.println("Hello...");

*/












