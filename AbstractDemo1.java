import java.lang.*;

abstract class Demo
{
    public int i,j;
    public Demo()
    {
        System.out.println("Demo constructor");
    }
    public void fun()   // Concrete
    {
        System.out.println("Demo fun");
    }
    public abstract void gun();         // Abstract             virtual void gun() = 0;
}

class Hello extends Demo
{
    public int x,y;
    public Hello()
    {
        System.out.println("Hello constructor");
    }
    public void sun()       // Concrete
    {
        System.out.println("HEllo sun");
    }
    public void gun()       // Concrete
    {
        System.out.println("Hello gun");
    }
}

class AbstractDemo1
{
    public static void main(String a[])
    {
        Demo dobj;
        dobj = new Demo();

        Hello hobj = new Hello();
        hobj.fun();
        hobj.gun();
        hobj.sun();
    }
}