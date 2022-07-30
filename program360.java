import java.lang.*;
import java.util.*;

// create table student(RID int, Name varchar(255), Salary int);
// Database table / schema
class Student
{
    public int RID;
    public String Name;
    public int Salary;

    public Student(int no, String str, int value)
    {
        this.RID = no;
        this.Name = str;
        this.Salary = value;
    }
}

class program360
{
    public static void main(String arg[])
    {
            Student obj = new Student(11,"Piyush",1000);
            System.out.println(obj.RID);
            System.out.println(obj.Name);
            System.out.println(obj.Salary);
    }
}