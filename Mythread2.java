import java.lang.*;

class Marvellous extends Thread
{
    public void run()           // State Running
    {
        System.out.println("Inside thread : "+Thread.currentThread().getName());
    }
}

class Mythread2
{
    public static void main(String arg[])
    {
        Marvellous mobj1 = new Marvellous();
        Thread t1 = new Thread(mobj1,"First");      // State new

        Marvellous mobj2 = new Marvellous();
        Thread t2 = new Thread(mobj2,"Second");

        t1.start();         // State Runnable
        t2.start();

        // State Dead
    }
}