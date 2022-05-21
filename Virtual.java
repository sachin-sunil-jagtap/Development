import java.lang.*;

class Base
{
        public int i,j;

        public void fun()           // Defination
        {   System.out.println("Base fun"); }

        public void gun()           // Defination
        {   System.out.println("Base gun"); }

        public void sun()           // Defination
        {   System.out.println("Base sun"); }
}

class Derived extends Base
{
        public int x,y;

        public void fun()           //  Overriding
        {   System.out.println("Derived fun"); }

        public void sun()       //          Overriding
        {   System.out.println("Derived sun"); }

        public void run()           //      Defination
        {   System.out.println("Derived run"); }
}

class Virtual
{
    public static void main(String arg[])
    {
 //           Base bobj = new Base();             // No casting
 //           Derived dobj = new Derived();       // No casting

            Base obj = new Derived();          // Upcasting        Base *bp = new Derived()
  //          Derived obj2 = new Base();          // Downcasting

            obj.fun();          // Derived fun          bp->fun()
            obj.gun();          // Base gun
            obj.sun();          // Derived sun
          //      obj.run();
    }
}