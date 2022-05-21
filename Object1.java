import java.lang.*;

class Employee      // class Employee extends Object
{
    public String name;
    public int Salary;

    public Employee(String str, int no)
    {
        this.name = str;
        this.Salary = no;
    }

    public String toString()
    {
            return "Employe name is "+name+" having salary "+Salary;
    }
}

class Object1
{
    public static void main(String arg[])
    {
        Employee eobj = new Employee("Piyush",1);
        System.out.println(eobj.toString());

    }
}