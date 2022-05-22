import java.lang.*;
import java.util.*;

class Student
{
    public int rno;
    public String name;
    public int marks;

    public Student(int a, String str, int b)
    {
        this.rno = a;
        this.name = str;
        this.marks = b;
    }

    public void Display()
    {
        System.out.println("Roll no : "+this.rno+ " Name : "+this.name+ " Marks : "+this.marks);
    }
}

class ST
{
    public static void main(String arg[])
    {
        Stack <Student>obj = new Stack<Student>();
        Student s1 = new Student(11,"Amit",89);
        Student s2 = new Student(21,"Pooja",93);
        Student s3 = new Student(51,"Rohit",80);
        Student s4 = new Student(101,"Sachin",97);

        obj.push(s1);
        obj.push(s2);
        obj.push(s3);
        obj.push(s4);

        Student ref  = null;
        Iterator iob = obj.iterator();
        while(iob.hasNext())
        {
            ref = (Student)iob.next();
            ref.Display();
        }

        System.out.println("Poped elemenst are");
        
        ref = obj.pop();
        ref.Display();

        ref = obj.pop();
        ref.Display();
    }
}