import java.lang.*;

class Employee implements Cloneable
{
    public int EID;
    public String Ename;
    public int ESalary;
  public Employee(int id, String str, int no)
  {
        this.EID = id;
        this.Ename = str;
        this.ESalary = no;
  }
  public Object clone() throws CloneNotSupportedException
  {
    return super.clone();
  }
}
class Copy
{
    public static void main(String arg[]) throws CloneNotSupportedException
    {
        Employee eobj = new Employee(11,"Piyush",21000);
        System.out.println("EID : "+eobj.EID+ " Name : "+eobj.Ename+" Salary : "+eobj.ESalary);
        try
        {
            Employee eobjX = (Employee)eobj.clone();
            System.out.println("EID : "+eobjX.EID+ " Name : "+eobjX.Ename+" Salary : "+eobjX.ESalary);
        }
        catch(CloneNotSupportedException obj)
        {}
        eobj.Ename = "Shubham";
        System.out.println("EID : "+eobjX.EID+ " Name : "+eobjX.Ename+" Salary : "+eobjX.ESalary);
    }
}