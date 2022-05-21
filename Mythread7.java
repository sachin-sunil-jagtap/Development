import java.lang.*;
import java.util.*;

class Marvellous
{
    public int Arr[];

    public Marvellous(int size)
    {
        Arr = new int[size];
    }
    public void Accept()
    {
           Scanner sobj = new Scanner(System.in);
           System.out.println("Enter numbers");

           for(int i = 0; i < this.Arr.length; i++)
           {
                this.Arr[i] = sobj.nextInt();
           }
    }
    public void Display()
    {
            System.out.println("Data from array is : ");
             for(int i = 0; i < this.Arr.length; i++)
           {
                System.out.println(this.Arr[i]);
           }
    }

    public void DisplayEven()
    {
        for(int i = 0; i < this.Arr.length; i++)
        {
            if(this.Arr[i] % 2 == 0)
            {
                System.out.println(this.Arr[i]);
            }
        }
    }
}

class Demo extends Thread
{
    public Marvellous mref;

    public Demo(Marvellous obj)
    {
        this.mref = obj;
    }

    public void run()
    {
           this.mref.DisplayEven();
    }
}

class Mythread7
{
    public static void main(String ar[]) throws Exception
    {
        Marvellous mobj1 = new Marvellous(4);
        Marvellous mobj2 = new Marvellous(4);

        mobj1.Accept();
        mobj1.Display();

        mobj2.Accept();
        mobj2.Display();

        Demo dobj1 = new Demo(mobj1);
        Demo dobj2 = new Demo(mobj2);

        Thread t1 = new Thread(dobj1);
        Thread t2 = new Thread(dobj2);

        t1.start();
        t2.start();

        t1.join();
        t2.join();

        System.out.println("End of main thread");
    }
}