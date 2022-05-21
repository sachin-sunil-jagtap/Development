class Mythread1
{
    public static void main(String arg[])
    {
        System.out.println("Inside main");

        Thread tobj = Thread.currentThread();

        System.out.println("Name of current thrad is : "+tobj.getName());

    }
}